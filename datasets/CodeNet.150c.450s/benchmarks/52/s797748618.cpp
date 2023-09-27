#include<iostream>
#include<cstdio>
using namespace std;
int a[101],b[101];
int main()
{
	int i=1,j,n,s=1;
	bool yes;
	while(cin>>a[i])
	{
		if(a[i]==0)
		{
			j=i-1;
			yes=true;
			while(yes==true)
			{
				if(a[j]!=0)
				{
					b[s]=a[j];
					a[j]=0;
					s++;
					yes=false;
				}
				j--;
			}
		}
		i++;
	}
	for(i=1;i<s;i++)cout<<b[i]<<endl;
	return 0;
}