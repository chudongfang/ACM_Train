#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF  = 1e9;
struct node
{
    int x;
    int num;
    bool operator < (const node &a) const
    {
        return x>a.x;
    }
};
vector<node> a;
node nt;
int n,c;

int l,r;
bool solve()
{
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		int t=(c-sum)/a[i].x;
		t=min(t,a[i].num);
		sum+=a[i].x*t;a[i].num-=t;
		if(c==sum)break;
	}
	if(c==sum)return 1;
	while(!a[l].num&&l<=r)l++;
	while(!a[r].num&&l<=r)r--;
	if(l>r)return 0;
	while(sum<c)
	{
		int t=(c-sum)/a[r].x+1;
		t=min(t,a[r].num);
		sum+=a[r].x*t;a[r].num-=t;
		if(!a[r].num)r--;
		if(l>r)break;
	}
	if(sum<c)return 0;
	return 1;
}






int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >>n>>c;
    for(int i=0;i<n;i++)
    {
        cin >> nt.x >> nt.num;
        a.push_back(nt);
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    l = 0;
    r = n-1;
    for(int i=0;i<n;i++)
    {
        if(a[i].x>=c)
        {
            l++;
            ans += a[i].num;
            a[i].num=0;
            break;
        }
    }
    while(solve()) ans++;
    cout << ans << endl;
    return 0;
}








