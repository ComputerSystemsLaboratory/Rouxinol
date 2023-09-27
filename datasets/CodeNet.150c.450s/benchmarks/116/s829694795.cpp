#include<iostream>
#include<algorithm>
#define int long long int
using namespace std;

signed main()
{
	int n,k;
	while(cin>>n>>k,n){
	
	int a[100000];
	for(int i=0;i<n;i++)cin>>a[i];
	
	int s=0;
	for(int i=0;i<k;i++)s+=a[i];
	int ma=s;
	for(int i=k;i<n;i++)
	{
		s-=a[i-k];
		s+=a[i];
		ma=max(ma,s);
	}
	cout<<ma<<endl;}
	return 0;
}