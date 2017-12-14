#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#define rep(i,m,n) for(int i=m;i<=n;i++)
#define rsp(it,s) for(set<int>::iterator it=s.begin();it!=s.end();it++)
const int inf_int = 1e9;
const long long inf_ll = 2e18;
#define inf_add 0x3f3f3f3f

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi acos(-1.0)
#define pii pair<int,int>
#define Lson L, mid, rt<<1
#define Rson mid+1, R, rt<<1|1

using namespace std;
typedef  vector<int> vi;
typedef  long long ll;
typedef  unsigned long long  ull;
inline int read(){int ra,fh;char rx;rx=getchar(),ra=0,fh=1;
while((rx<'0'||rx>'9')&&rx!='-')rx=getchar();if(rx=='-')
fh=-1,rx=getchar();while(rx>='0'&&rx<='9')ra*=10,ra+=rx-48,
rx=getchar();return ra*fh;}
//#pragma comment(linker, "/STACK:102400000,102400000")
ll gcd(ll p,ll q){return q==0?p:gcd(q,p%q);}
ll qpow(ll p,ll q){ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}
//int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
//const int maxn=1e6+10;
const double eps = 1e-9;
//const int inf = 1e5+5;
const int N = 1e3+5;





int main()
{
    /* srand( (unsigned)time( NULL ) );
    cout << 10<<endl;
    int n  = rand()%;
    int m  = rand()%50;
    // int p  =rand()%1000;
    // if(rand()%2)
    //     p*=-1;
    cout << n <<" "<< m<<endl;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<m;i++)
        {
            cout << rand()%100<<" ";
        }
        cout <<endl;
    }*/
    cout <<1<<endl;
    cout <<"1000000000000 2"<<endl;

    return 0;
}






