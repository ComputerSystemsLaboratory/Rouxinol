#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	for(int h=0;h<n;h++)
	{
		double x[4],y[4];
		for(int i=0;i<4;i++)cin>>x[i]>>y[i];
		if(x[0]==x[1]||x[2]==x[3])
		{
			if(x[0]==x[1]&&x[2]==x[3])
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			double Z,X;
			Z=(y[1]-y[0])/(x[1]-x[0]);
			X=(y[3]-y[2])/(x[3]-x[2]);
			if(abs(Z-X)<0.0000000001)
			{
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
		
		}
	}
	
}