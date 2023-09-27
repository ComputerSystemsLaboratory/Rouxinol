#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n,n)
	{
		int a[n];
		for (int i = 0; i < n; ++i) cin>>a[i];
		sort(a,a+n);
		int ans=10000000;
		for (int i = 1; i < n; ++i) ans=min(ans,a[i]-a[i-1]);
		cout<<ans<<endl;
	}
	return 0;
}
