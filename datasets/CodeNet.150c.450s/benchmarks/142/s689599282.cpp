#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,k,a[200005]={0};
	cin>>n>>k;
	for(int x=1;x<=n;x++)
	cin>>a[x];
	for(int x=k+1;x<=n;x++)
	{
		if(a[x]>a[x-k])cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
