#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int e;
	while(cin>>e,e) 
	{
		int m=10000000;
		for(int z = 0; z*z*z <= e; ++z)
		{
			int t=e-z*z*z;
			t=sqrt(t);
			for(int y = 0; y <= t; ++y)
			{
				m=min(m,z+y+(e-z*z*z-y*y));	
			}
		}
		cout<<m<<endl;
	}
  return 0;
}