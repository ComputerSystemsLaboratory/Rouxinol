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
	double ax, ay, bx, by, cx, cy, dx, dy;

	cin >> n;

	for ( int i = 0; i < n; i++ )
	{
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
		if ( ( by - ay ) / ( bx - ax ) == ( dy - cy ) / ( dx - cx ) )
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}