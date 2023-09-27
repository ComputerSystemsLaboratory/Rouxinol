#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int e;
int m, a;
int main()
{
	while(cin >> e && e!=0)
	{
		m=e;
		for(int z=0; (z*z)*z<=e; z++)
		{
			for(int y=0; (y*y)+((z*z)*z)<=e; y++)
			{
				a=y;
			}
			m=min(m, a+z+e-a*a-z*z*z);
		}
		cout << m << endl;
	}
	return 0;
}