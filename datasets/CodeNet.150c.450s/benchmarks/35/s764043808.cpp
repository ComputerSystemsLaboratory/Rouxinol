#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	while ( true )
	{
		int n;cin>>n;
		if(n==0)
			break;
		vector<int> a(n);
		for ( int i=0; i<n; i++ )
			cin>>a[i];
		long long ans=-10000000000ll;
		for ( int i=0; i<n; i++ )
		{
			long long t=0;
			for ( int j=i; j<n; j++ )
				t += a[j],
				ans = max(t,ans);
		}
		cout<<ans<<endl;
	}
}