#include<iostream>
#include<algorithm>
using namespace std;

int a[10];

bool dfs(int n,int l,int r)
{
	if(n>=10)return true;
	if(l<a[n])if(dfs(n+1,a[n],r))return true;
	if(r<a[n])if(dfs(n+1,l,a[n]))return true;
	return false;
}

int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)cin>>a[j];
		if(dfs(0,-1,-1))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}