#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int n;
	vector<int> nums;

	while ( cin >> n )
	{
		nums.push_back( n );
	}

	sort( nums.begin(), nums.end(), greater<int>() );
	
	for ( vector<int>::iterator it = nums.begin(); it != nums.end(); )
	{
		cout << *( it++ );

		if ( it != nums.end() )
		{
			cout << ' ';
		}
	}
	cout << endl;

	return 0;
}