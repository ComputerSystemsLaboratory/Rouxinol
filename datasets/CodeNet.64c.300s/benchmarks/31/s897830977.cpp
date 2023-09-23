#include <iostream>
using namespace std;
int main(void)
{
	int a,b,c[31]={0},d,e;
	for (a=0;a<28;a++)
	{
		cin>>b;
		c[b]=1;
	}
	for (a=1;a<31;a++)
	{
		if (c[a]!=1)
		{
			cout<<a<<endl;
		}
	}
	return 0;
}