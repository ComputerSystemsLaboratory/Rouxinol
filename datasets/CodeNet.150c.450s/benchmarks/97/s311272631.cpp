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
#define INF 1<<10

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const int dx[] = { -1, 0, 1, 0 };
const int dy[] = {  0, 1, 0, -1 };

int main()
{

//	cut here before submit 
//	freopen ("testcase.PSH", "r", stdin );
	int n;
	while (scanf ("%d", &n ), n ){
		if (n == 1 ){
			cout << 1 << ' ' << 1 << endl;
		}else{
			vector<int> cx (n, 0 ), cy(n, 0 );
			int m, d;
			int minx = INF, miny = INF, maxx = 0, maxy = 0;
			cx[0] = 0, cy[0] = 0;
			for (int i = 1; i < n; i++ ){
				scanf ("%d %d", &m, &d );
				cx[i] = cx[m] + dx[d];
				cy[i] = cy[m] + dy[d];
			} // end for
			rep (i, n ){
				minx = min (minx, cx[i] ); miny = min (miny, cy[i] );
				maxx = max (maxx, cx[i] ); maxy = max (maxy, cy[i] );
			} // end rep
			int h = maxy - miny + 1;
			int w = maxx - minx + 1;
			printf ("%d %d\n", w, h );
		} // end if
	} // end loop
		
	return 0;
}