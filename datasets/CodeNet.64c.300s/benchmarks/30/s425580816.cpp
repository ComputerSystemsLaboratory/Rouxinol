#include <iostream>
using namespace std;
int main(void)
{
	for (;;)
	{
		int a,b,c,d,e,f,g,h,i,j,k,l,n,m;
		d=0;
		cin>>a;
		if (a==0)
		{
			break;
		}
		b=1000-a;
		c=b/500;
		d=d+c;
		e=b%500;
		c=e/100;
		d=d+c;
		e=b%100;
		c=e/50;
		d=d+c;
		e=b%50;
		c=e/10;
		d=d+c;
		e=b%10;
		c=e/5;
		d=d+c;
		e=b%5;
		d=d+e;
		cout<<d<<endl;
	}
	return 0;
}