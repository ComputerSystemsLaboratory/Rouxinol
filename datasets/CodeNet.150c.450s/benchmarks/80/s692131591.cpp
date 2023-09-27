#include <iostream>
using namespace std;
int main(void)
{
	int a,b,c,d,e;
	c=0;
	d=0;
	for (a=0;a<4;a++)
	{
		cin>>e;
		c=c+e;
	}
	for (a=0;a<4;a++)
	{
		cin>>b;
		d=d+b;
	}
	if (d>=c)
	{
		cout<<d<<endl;
	}
	else if (d<=c)
	{
		cout<<c<<endl;
	}
	return 0;
}