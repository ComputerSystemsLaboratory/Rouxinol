#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<utility>
#include<cmath>
using namespace std;
#define all(a) a.begin(),a.end()


int main()
{
	long long a[40]={0,1,1,1};
	for(int i=0;i<=30;i++)
	{
		for(int j=1;j<=3;j++)
		{
			a[i+j]+=a[i];
		}
	}
	
	int n;
	while(cin>>n&&n)
	{
		int ans=a[n];
		ans=ans/10+(ans%10?1:0);
		ans=ans/365+(ans%365?1:0);
		cout<<ans<<endl;
	}
	
}