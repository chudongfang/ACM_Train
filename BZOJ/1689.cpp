#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
    int l;
    int r;
    bool operator < (const node &x) const
    {
        return l<x.l;
    }
};
int n;
vector<node> a;
node nt;
int len=0;
int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >> n >>len;
    for(int i=0;i<n;i++)
    {
        cin >> nt.l >> nt.r;
        a.push_back(nt);
    }
    sort(a.begin(),a.end());
    int cur=a[0].l;
    int ans =0 ;
    for(int i=0 ; i < n;i++ )
    {
        if(cur<a[i].l)
        {
            cur=a[i].l;
        }
        while(cur<a[i].r) cur+=len,ans++;
    }
    cout << ans<<endl;
    return 0;
}






