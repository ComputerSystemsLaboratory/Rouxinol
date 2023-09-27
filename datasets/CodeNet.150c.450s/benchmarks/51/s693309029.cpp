#include<iostream>
using namespace std;
int main()
{
	int m[32]={0},i,e;
	for(i=1;i<=28;i++)
	{
		cin>>e;
		m[e]=1;

	}
	for(i=1;i<=30;i++)
	{
		if(m[i]==0)
			cout<<i<<endl;
	}
	return 0;
}