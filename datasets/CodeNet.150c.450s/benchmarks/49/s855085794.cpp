#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n,n)
	{
		int t;
		cin>>t;
		int s=t,mi=t,ma=t;
		for (int i = 1; i < n; ++i)
		{
			cin>>t;
			s+=t;
			mi=min(mi,t);
			ma=max(ma,t);
		}
		cout<<(s-ma-mi)/(n-2)<<endl;
	}
	return 0;
}

