#include <iostream>
using namespace std;
int main(void)
{
	for (;;)
	{
		int a,b,c,d;
		int e=0;
		int f=0;
		cin>>a;
		if (a==0)
		{
			break;
		}
		for (b=0;b<a;b++)
		{

			cin>>c>>d;
			if (c>d)
			{
				e=e+c+d;
			}
			else if (c<d)
			{
				f=f+d+c;
			}
			else if (c==d)
			{
				e=e+c;
				f=f+d;
			}
		}
		cout<<e<<" "<<f<<endl;
	}
	return 0;
}
			