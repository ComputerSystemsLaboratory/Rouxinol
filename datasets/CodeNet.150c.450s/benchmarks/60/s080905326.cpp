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

bool adj[105][105];

int main()
{
	memset (adj, false, sizeof (adj ) );

	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	rep (i, n ){
		int v, k;
		cin >> v >> k;
		rep (j, k ){
			int u; cin >> u;
			adj[v][u] = true;
		} // end rep
	} // end rep
	
	for (int i = 1; i <= n; i++ )
		for (int j = 1; j <= n; j++ )
			cout << (adj[i][j] ? 1 : 0) << (j != n ? ' ' : '\n' );
	
	
	return 0;
}