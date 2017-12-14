#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF  = 1e18;
const int N = 1000004;



int isprime[1000005];
int prime[1000005];
int cnt  = 0;
void initprime()
{
    for(int i=2;i<N;i++)
    {
        isprime[i] = true;
    }
    for(int i=2;i<N;i++)
    {
        if(isprime[i])
        {
            prime[++cnt]=i;
            for(int j=i<<1;j<N;j+=i)
            {
                isprime[j] = false;
            }
        }
    }
}



int T;
int n;
int ct[100005];
int a[100005];
ll  b[100005];
int num;
int mid;
ll aa,bb;
int ans = 0;

void dfs(int cur,ll x)
{
    if(x>mid) return ;
    if(cur>=num)
    {
        if(x<bb)
        {
            return ;
        }
        else
        {
            ans++;
        }
//        cout << x<<endl;
        return ;
    }

    for(int i=0;i<=a[cur];i++)
    {
        ll tt = 1;
        for(int j=0;j<i;j++)
        {
            tt*=b[cur];
        }
        dfs(cur+1,x*tt);
    }
}



int main()
{
//    freopen("data.txt","r",stdin);
//    ios::sync_with_stdio(false);
    initprime();
    cin >> T;
    for(int cas = 1;cas<=T;cas++)
    {
        ans = 0;
        memset(ct,0,sizeof(ct));

        cin >> aa>>bb;
        mid = sqrt(aa);
        ll tx = aa;
        int f = 1;
        while(tx!=1&&f)
        {
            f=0;
            for(int i=1;i<=cnt;i++)
            {
                if(tx%prime[i]==0)
                {
                    ct[i]++;
                    f=1;
                    tx/=prime[i];
                    break;
                }
            }
        }
        num = 0;
        for(int i=1;i<=cnt;i++)
        {
            if(ct[i])
            {
                a[num] = ct[i];
                b[num] = prime[i];
                num++;
            }
        }
        if(tx!=1)
        {
            a[num] = 1;
            b[num] = tx;
            num++;
        }


        cout << num<<endl;
        for(int i=0;i<num;i++)
        {
            cout <<b[i]<<" "<<a[i]<<endl;
        }

        dfs(0,1);
        cout <<"Case "<<cas<<": "<<ans<<endl;

    }

    return 0;
}



