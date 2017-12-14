#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF  = 1e18;



int T;
int n;
int main()
{
//    freopen("data.txt","r",stdin);
    ios::sync_with_stdio(false);
    cin >> T;
    for(int cas = 1;cas<=T;cas++)
    {
        ll a,b;
        cin >> a>>b;
        ll ct = 0;
//        cout << a<<" "<<sqrt(a)<<endl;
        ll en = sqrt(a);
        for(ll i= b;i<=en;i++)
        {
            if(a%i==0)
            {
                ct++;
            }
        }
        cout <<"Case "<<cas<<": "<<ct<<endl;

    }

    return 0;
}

