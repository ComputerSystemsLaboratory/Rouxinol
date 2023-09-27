#include <iostream>
using namespace std;
int main(void)
{
	int a,b,c,d[100]={0},e,f;
	long long D[100][21]={0};
	cin>>a;
	int Z=0;
	for (b=0;b<a;b++)
	{
		cin>>c;
		d[b]=c;
		if (b==0)
		{
			D[b][c]=1;
		}
		else
		{
			for (e=0;e<21;e++)
			{
				if (D[b-1][e]>0)
				{
					f=e-c;
					if (f>=0)
					{
						D[b][f]+=D[b-1][e];
					}
					f=e+c;
					if (f<=20)
					{
						D[b][f]+=D[b-1][e];
					}
					
				}
				
			}
		}
		
	}
	cout<<D[a-2][d[a-1]]<<endl;
	return 0;
}
		