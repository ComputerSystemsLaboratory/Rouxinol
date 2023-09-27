#include<bits/stdc++.h>
#define fint register int
#define p 457834
#define h 5001
using namespace std;
int a[p];
int main()
{
	int n,k;
	cin>>n>>k;
	for(fint i=1;i<=n;i++)
	cin>>a[i];
	for(fint i=k+1;i<=n;i++)
	if(a[i]>a[i-k])
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}