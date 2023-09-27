#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll n,k;
ll  a[200005];
int main()
{
	int i,j,k;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i+k<n;i++)
	{
		if(a[i]<a[i+k])
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl; 
	}
    return 0;
    
}