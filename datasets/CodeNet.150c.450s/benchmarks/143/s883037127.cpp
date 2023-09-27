#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=100005;
int n,q,a[N],ans;
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
		ans+=x;
	}
	cin>>q;
	while(q--)
	{
		int b,c;
		cin>>b>>c;
		ans+=(c-b)*a[b];
		a[c]+=a[b];
		a[b]=0;
		cout<<ans<<endl;
	}
	return 0;
}
