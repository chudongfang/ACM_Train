#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int n,d,k;
vector<int> a[1005];
int len[1005];
int t;
int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >> n >> d>> k;
    for(int i=0;i<n;i++)
    {
        cin >> len[i];
        for(int j=0;j<len[i];j++)
        {
            cin >> t;
            a[i].push_back(t-1);
        }
    }
    int ans = 0;
    int maxx = 1<<d;
    int tm[20];
    for(int i=0;i<maxx;i++)
    {
        memset(tm,0,sizeof(tm));
        t = i;
        int ct =0 ;
        int dig=0;
        while(t)
        {
            if(t&1)
            {
                tm[dig]=1;
                ct++;
            }
            dig++;
            t>>=1;
        }
        if(ct>k) continue;

        int num =0 ;
        int f=0;
        for(int j=0;j<n;j++)
        {
            f=0;
            for(int k=0;k<len[j];k++)
            {
                if(tm[a[j][k]]==0)
                {
                    f=1;
                    break;
                }
            }
            if(!f)
            {
                num++;
            }
        }
        ans = max(ans,num);
    }
    cout << ans<<endl;
    return 0;
}






