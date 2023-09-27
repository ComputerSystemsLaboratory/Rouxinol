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
	int d;

	while ( cin >> d )
	{
		int res = 0;

		for ( int i = 0; i * d < 600; i++ )
		{
			res += d * pow( i * d, 2 );
		}

		cout << res << endl;
	}

	return 0;
}