#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<algorithm>
#include<functional>
using namespace std;

int n,q;
int a=0;
int c=0;
int s[10000]={};
int t[10000]={};




int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>s[i];
	}

	cin>>q;
	for(int j=0;j<q;j++)
	{
	cin>>t[j];
	}

	for(int k=0;k<n;k++)
	{
	for(int l=0;l<q;l++)
	{
	a=s[k]^t[l];
	if(a==0)
	{
	c+=1;
	t[l]=-1;
	}
	}
	
	}
	cout<<c<<endl;
	return 0;
}