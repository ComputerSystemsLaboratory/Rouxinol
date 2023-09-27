#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() 
{
	int n;
	while(cin >> n && n>0)
	{
		int ans = 2000000;
		for(int i = 0;i<101;i++)
		{
			for(int j=0;j<1001;j++)
			{
				if((n-i*i*i-j*j)>-1)
				{
					if(ans>(i+j+n-i*i*i-j*j))
					{
						ans = i+j+n-i*i*i-j*j;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0 ;
}