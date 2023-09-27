#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count __gcd reverse etc.
#include <cstdlib>	// require abs exit atof atoi 
#include <cstdio>		// require scanf printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require fabs
#include <climits>
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>		// require tolower, toupper
#include <fstream>	// require freopen
#include <ctime>		// require srand
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

double cross (double x1, double y1, double x2, double y2 )
{
	return (x1*y2 - x2*y1 );
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.APT", "r", stdin );
	string str = "";
	while (getline (cin, str ) && !str.empty() ){
		stringstream ss (str );
		double x1, y1, x2, y2, x3, y3, xp, yp;
		ss >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
		double c1 = cross (xp - x1, yp - y1 , x2 - x1, y2 - y1 );
		double c2 = cross (xp - x2, yp - y2 , x3 - x2, y3 - y2 );
		double c3 = cross (xp - x3, yp - y3 , x1 - x3, y1 - y3 );
		if ((c1 > 0. && c2 > 0. && c3 > 0. ) || (c1 < 0. && c2 < 0. && c3 < 0. ) ){
			printf ("YES\n" );
		}else{
			printf ("NO\n" );
		} // end if
	} // end while

	return 0;
}