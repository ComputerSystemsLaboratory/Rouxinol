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
	int w, n;
	vector<int> vertical;
	vector< pair<int,int> > horizontal;
	string buffer;

	cin >> w;

	for ( int i = 1; i <= w; i++ )
	{
		vertical.push_back( i );
	}

	cin >> n;

	for ( int i = 0; i < n; i++ )
	{
		cin >> buffer;

		for ( unsigned int i = 0; i < buffer.size(); i++ )
		{
			if ( buffer[i] == ',' )
			{
				buffer[i] = ' ';
				break;
			}
		}

		int a, b;
		sscanf( buffer.c_str(), "%d %d", &a, &b );

		horizontal.push_back( make_pair( a - 1, b - 1 ) );
	}

	for ( unsigned int i = 0; i < horizontal.size(); i++ )
	{
		swap( vertical[ horizontal[i].first ], vertical[ horizontal[i].second ] );
	}
	

	for ( unsigned int i = 0; i < vertical.size(); i++ )
	{
		cout << vertical[i] << endl;
	}

	return 0;
}