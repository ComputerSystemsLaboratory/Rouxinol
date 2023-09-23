#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[1005];
	a[0]=0;
	for (int i = 1; i < 1005; ++i) a[i]=i+a[i-1];
	int n;
	while(cin>>n,n)
	{
		int ans=0;
		for (int i = 0; i <= 1000; ++i)
		{
			for (int j = i+2; j <= 1000; ++j)
			{
				if(a[j]-a[i]==n) ++ans;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
