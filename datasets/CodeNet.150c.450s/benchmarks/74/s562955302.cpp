#include <iostream>
#include <string>
using namespace std;
int n,m;
int memo[100001];
int a[21];
int main()
{
	for(int i = 0;i<100000;i++)
	{
		memo[i]=99999;
	}
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	memo[0]=0;
	for(int i = 0;i<n;i++)
	{
		for(int l = 0;l< m;l++)
		{
			memo[i+a[l]]=min(memo[i+a[l]],memo[i]+1);
		}
	}
	cout<<memo[n]<<endl;
	
	
	return 0;
}