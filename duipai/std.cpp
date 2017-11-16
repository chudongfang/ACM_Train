/**************************************************************
    Problem: 1619
    User: RoyYuan
    Language: C++
    Result: Wrong_Answer
****************************************************************/


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

inline int read(){int ra,fh;char rx;rx=getchar(),ra=0,fh=1;
while((rx<'0'||rx>'9')&&rx!='-')rx=getchar();if(rx=='-')
fh=-1,rx=getchar();while(rx>='0'&&rx<='9')ra*=10,ra+=rx-48,
rx=getchar();return ra*fh;}

//const int MAXN=1100;//最大点数
//const int MAXM=100100;//最大边数

const int INF = 1e9;
int dir[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
int n,m;
int mm[1000][1000];

struct node{
    int x;
    int y;
    int w;
    bool operator<(const node x)const
    {
        return w>x.w;
    }
};

vector<node> a;



int vis[1000][1000];

void dfs(int x,int y)
{
    vis[x][y]=1;
    for(int i=0;i<8;i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(xx<=0||xx>n||yy<=0||yy>m||vis[xx][yy])
        {
            continue;
        }
        if(mm[xx][yy]<=mm[x][y])
        {
            dfs(xx,yy);
        }
    }
}


node nt;


int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> mm[i][j];
            nt.x = i;
            nt.y = j;
            nt.w = mm[i][j];
            a.push_back(nt);
        }
    }
    sort(a.begin(),a.end());

    int ans = 0;
    for(int i=0;i<a.size();i++)
    {
        if(vis[a[i].x][a[i].y] ) continue;
        ans++;
        dfs(a[i].x,a[i].y);
    }
    cout << ans<<endl;
    return 0;
}
