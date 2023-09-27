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
#define EPS 1e-9

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

double cross (double xa, double ya, double xb, double yb )
{
	return (xa*yb - xb*ya );
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.Parallelism", "r", stdin );
	int n;
	scanf ("%d", &n );
	rep (i, n ){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double d = cross (x2-x1, y2-y1, x4-x3, y4-y3 );
		if (fabs (d ) < EPS ){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		} // end if
	} // end loop
		
	return 0;
}