#!/bin/bash
g++ -std=c++11 std.cpp -o  std 
g++ -std=c++11 data.cpp -o  data 
g++ -std=c++11 Todobe.cpp -o  Todobe 


while true; do
    ./data > data.in
    ./std <data.in >std.out
    ./Todobe <data.in >Todobe.out
    if diff std.out Todobe.out; then
        printf "AC\n"
    else
        printf "Wa\n"
        exit 0
    fi
done
