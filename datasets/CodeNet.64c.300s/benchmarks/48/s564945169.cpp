#include<iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int main()
{
	    int n;
		bool a[1000001]; 
		memset(a,0,sizeof(a));
		for(int i=2;i<=1000;++i)
		{
			for(int j=2;j*i<=1000000;++j)
			{
				a[i*j]=1;
			}
		}

	while(cin>>n)
	{
		int count=0;
		for(int k=2;k<=n;k++)
		{
			if(!a[k])
			count++;
		}
		cout<<count<<endl;
	
	
		
	}
	return 0;
}