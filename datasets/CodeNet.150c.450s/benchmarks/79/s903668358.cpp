#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,r;
	while(cin>>n>>r,n+r)
	{
		int a[n],b[n];
		for (int i = 0; i < n; ++i) a[i]=n-i;
		int p,c;
		for (int i = 0; i < r; ++i)
		{
			cin>>p>>c;
			--p;
			for (int i = 0; i < n; ++i) b[i]=a[i];
			for (int i = 0; i < c; ++i) a[i]=b[i+p];
			for (int i = 0; i < p; ++i) a[i+c]=b[i];
		}
		cout<<a[0]<<endl;
	}
	return 0;
}

