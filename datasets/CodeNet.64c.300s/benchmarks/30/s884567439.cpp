#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int sum,m;
	while(1)
	{
		cin>>m;
		if(m==0)
		{
			break;
		}
		m=1000-m;
		sum=m/500+(m%500)/100+(m%500%100)/50+(m%500%100%50)/10+(m%500%100%50%10)/5+(m%500%100%50%10%5);
		cout<<sum<<endl;
	}
	return 0;
}
