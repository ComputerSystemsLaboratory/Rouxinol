#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,s=0,t=0;
	for(i=1;i<=4;i++)
	{
		cin>>n;
		s+=n;
	}
	for(i=1;i<=4;i++)
	{
		cin>>n;
		t+=n;
	}
	if(s>=t)cout<<s<<endl;
	else cout<<t<<endl;
}