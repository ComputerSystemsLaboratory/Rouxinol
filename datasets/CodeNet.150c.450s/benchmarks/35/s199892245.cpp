#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

using namespace std;

long int a[5000],ma,n;

int main()
{
	
	while(cin >> n, n)
	{
		ma = INT_MIN;
		
		for( int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		for( int j = 0; j < n; j++)
		{
			int sum = 0;
			
			for( int i = j; i < n; i++)
			{
				sum += a[i];
				
				if( sum > ma )
					ma = sum;
				
			}
		}
		
		cout << ma << endl;
	}
	
	return 0;
}