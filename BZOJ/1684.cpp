#include<bits/stdc++.h>
using namespace std;

inline double abs1(double x)
{if (x<0)x=-x;return x;}

int ax,ay;
int a,b;
double save = 1e18;
void jud(int x,int y)
{
    if (x*b==y*a) return;
    double work=abs1((double)x/y-(double)a/b);
    if (work<save)
    {
        save=work;
        ax = x;
        ay = y;
    }
}
int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >> a>>b;
    for(int i=1;i<32768;i++)
    {
        int j = (int)floor((double)a/b*i);
        jud(j,i);
        jud(j+1,i);
    }
    cout << ax<<" "<<ay<<endl;
    return 0;
}






