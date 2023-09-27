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

int bucket[10];
int a[4], b, hit, blow;

int main()
{
	
	while(1)
	{
		
		memset(bucket, 0, sizeof(bucket));
		hit = 0; blow = 0;
		
		for(int i = 0; i < 4; i++)
		{
			cin >> a[i];
			
			if( cin.eof() )
				return 0;
			
			bucket[a[i]] = 1;
		}
		
		for(int i = 0; i < 4; i++)
		{
			cin >> b;
			if( b == a[i] )
				hit++;
			else if( bucket[b] )
				blow++;
		}
		
		cout << hit << " " << blow << endl;	
		
	}
	
	return 0;
}