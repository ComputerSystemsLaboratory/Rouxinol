#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int c,g,n;
	while(1)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		g=1000-n;
		c=(g/500)+(g%500/100)+(g%500%100/50)+(g%500%100%50/10)+(g%500%100%50%10/5)+(g%500%100%50%10%5);
		cout<<c<<endl;
	}
	return 0;
}

	
	