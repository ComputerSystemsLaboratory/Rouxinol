#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n, m;
int a[100], b[100];
int s, t, u;
int x, y;
int main()
{
	while(cin >> n >> m && n!=0)
	{
		s=0;
		t=0;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			s+=a[i];
		}
		for(int j=0; j<m; j++)
		{
			cin >> b[j];
			t+=b[j];
		}
		u=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if((a[i]-b[j])*2==s-t)
				{
					u+=1;
					if(u==1)
					{
						x=a[i];
						y=b[j];
					}
					else if(a[i]+b[j]<x+y)
					{
						x=a[i];
						y=b[j];
					}
				}
			}
			
		}
		if(u==0)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << x << " " << y << endl;
			}
	}
	return 0;
}