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
typedef pair<char,int> CI;

//const int dy[] = {-1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0,-1 }; 
const int dy[] = { 1, 0, -1, 0 };
const int dx[] = { 0, 1,  0,-1 };
bool c[25][25];

int main()
{
//	cut here before submit 
//	freopen ("testcase.MG", "r", stdin );
	map<char,int> dir; dir.clear();
	dir['N'] = 0; dir['E'] = 1; dir['S'] = 2; dir['W'] = 3;

	int n;
	while (scanf ("%d", &n ), n ){
		memset (c, false, sizeof (c ) );
		rep (i, n ){
			int jx,jy;
			scanf ("%d %d", &jx, &jy );
			c[jy][jx] = true;
		} // end rep
		int m;
		scanf ("%d", &m );
		vector<CI> com(m );
		rep (i, m ){
			char d; int len;
			scanf (" %c %d", &d, &len );
			com[i].first  = d;
			com[i].second = len;
		} // end rep
		int cx = 10, cy = 10;
		rep (i, m ){
			char  d = com[i].first;
			int len = com[i].second;
			rep (j, len ){	
				cx += dx[dir[d]];
				cy += dy[dir[d]];
				c[cy][cx] = false;
			} // end rep
		} // end rep

		bool ok = true;
		rep (i, 25) rep (j, 25 )
			if (c[i][j] ){ ok = false; break; }
		
		if (ok ){
			printf ("Yes\n" );
		}else{
			printf ("No\n" );
		} // end if
	} // end loop
		
	return 0;
}