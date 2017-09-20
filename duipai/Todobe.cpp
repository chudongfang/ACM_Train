#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 100005;

int T;
int n;
int a[N];
int pre[N];
int nex[N];
int vis[N];
int st;
set<int> ss,s1;
vector<int> tmp;


void del(int cur)
{

    nex[ pre[cur] ] = nex[cur];
    pre[ nex[cur] ] = pre[cur];
    vis[cur] = 1;
    ss.insert(pre[cur]);
}


int t;
int main()
{
//    freopen("data.txt","r",stdin);
    scanf("%d", &T);
    while(T--)
    {
        memset(vis,0,sizeof(vis));
        ss.clear();
        s1.clear();
        scanf("%d",&n);
        pre[0] = -1;
        nex[0] = 1;
        a[0] =-1;

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&t);
            a[i] = t;
            pre[i] = i-1;
            nex[i] = i+1;
        }

        a[n+1] = 1000005;
        nex[n+1] = -1;
        pre[n+1] = n;

        int cas = 1;
        for(int i=1;i<=n;i++)
        {
            ss.insert(i);
        }

        while(1)
        {
            tmp.clear();

            for(auto &it : ss)
            {

                if( a[it]<a[pre[it]] || a[it]> a[nex[it]] )
                {
                    tmp.push_back(it);
                }

                if(nex[nex[it]] !=-1 && (a[ nex[it] ]<a[it] || a[nex[it]]  > a[ nex[nex[it]] ]) )
                {
                    tmp.push_back(nex[it]);
                }
            }

            ss.clear();
            int tlen = tmp.size();
            for(int i=0; i<tlen ;i++)
            {
                if(vis[tmp[i]]) continue;
                del(tmp[i]);
            }

            if(ss.size()==0)
            {
                break;
            }
        }

        int ans = 0;
        int cur = nex[0];

        while(cur!=-1)
        {
            if(cur!=0&&cur!=n+1)
                ans++;
            cur = nex[cur];
        }

        printf("%d\n",ans);
        cur = nex[0];
        while(cur!=-1)
        {
            if(cur!=0&&cur!=n+1)
                printf("%d ",a[cur]);
            cur = nex[cur];
        }
        printf("\n");
    }
    return 0;
}






















