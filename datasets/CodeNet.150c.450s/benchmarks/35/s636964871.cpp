#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int n;while(cin>>n,n){
	int a[5000];
	rep(i,n)cin>>a[i];
	int ans=-10000000,sum;
	rep(i,n)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=a[j];
			ans=max(ans,sum);
		}
	}
	cout<<ans<<endl;}
	return 0;
}