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
#define INF 1<<20

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int cost[105][105];
int mincost[105];
bool used[105];

int prim (int n )
{
	memset (used, false, sizeof (used ) );
	rep (i, n ) mincost[i] = INF;

	mincost[0] = 0;
	int res = 0;

	while (true ){
		int v = -1;
		// X  に属さない頂点のうち X からの辺のコストが最小になる頂点を探す
		rep (u, n )
			if (!used[u] && (v == -1 || mincost[u] < mincost[v] ) ) v = u;

		if (v == -1 ) break;

		used[v] = true;
		res += mincost[v];

		rep (u, n ) mincost[u] = min (mincost[u], cost[v][u] );
	} // end while

	return res;
}

int main()
{
	memset (cost, -1, sizeof (cost ) );
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	rep (i, n ) rep (j, n ) cost[i][j] = INF;

	rep (i, n ) rep (j, n ){
		int in; cin >> in;
		if (in == -1 ) in = INF;
		cost[i][j] = in;
	} // end rep

	int res = prim(n );
	cout << res << endl;
		
	return 0;
}