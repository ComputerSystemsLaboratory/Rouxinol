#include<iostream>
using namespace std;
int main()
{
	int i,j,s=0,t=0,a[4],b[4];
	for(j=0;j<2;j++)
	{
		for(i=0;i<4;i++)
		{
			if(j==0)
			{
				cin>>a[i];
				s=a[i]+s;
			}
			else
			{
				cin>>b[i];
				t=b[i]+t;
			}
		}
	}
	if(t<s)
	{
	 cout<<s<<endl;
	}
	else
	{
	cout<<t<<endl;
	}	
	return 0;
}