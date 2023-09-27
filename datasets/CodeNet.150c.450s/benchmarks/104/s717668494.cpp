#include<cstdio>
#include<iostream>
using namespace std;
int s[31];
int main()
{
	int i,n,m,w,a,b,p;
	char d;
	cin>>w;
	for(i=1;i<=w;i++)s[i]=i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>d>>b;
		p=s[a];s[a]=s[b];s[b]=p;
	}
	for(i=1;i<=w;i++)cout<<s[i]<<endl;
	return 0;
}