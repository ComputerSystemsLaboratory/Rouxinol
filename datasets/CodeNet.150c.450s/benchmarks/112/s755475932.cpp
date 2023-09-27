#include <iostream>
using namespace std;
int main(void)
{
	for (;;)
	{
		int a,b;
		char d,e;
		int f;
		char g;
		int h;
		char c[2][100000]={0};
		char C[2][100000]={0};
		cin>>a;
		if (a==0)
		{
			break;
		}
		for (b=0;b<a;b++)
		{
			cin>>d>>e;
			c[0][b]=d;
			c[1][b]=e;
		}
		cin>>f;
		for (h=0;h<f;h++)
		{
			cin>>g;
			C[0][h]=g;
			for (b=0;b<a;b++)
			{
				if (C[0][h]==c[0][b])
				{
					C[1][h]=c[1][b];
					break;
				
				}
				else if (C[0][h]!=c[0][b])
				{
					C[1][h]=C[0][h];
				}
			}
		}
		for (h=0;h<f;h++)
		{
			cout<<C[1][h];
		}
		cout<<endl;
	}
	return 0;
}