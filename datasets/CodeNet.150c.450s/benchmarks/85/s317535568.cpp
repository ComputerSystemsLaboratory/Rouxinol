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
#define INF 1<<25

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int a[105];
int dp[105][105];

int main()
{
	memset (a, 0, sizeof (a ) );
	memset (dp, 0, sizeof (dp ) );

	ios_base::sync_with_stdio(0);
	int n; cin >> n;

	rep (i, n+1 ) for (int j = i+1; j < n+1; j++ ) dp[i][j] = INF;

	
	rep (i, n ){
		int r, c; cin >> r >> c;
		a[i] = r; a[i+1] = c;
	} // end rep

	for (int i = n; i >= 1; i-- ){
		for (int j = i; j <= n; j++ ){
			for (int k = i; k < j; k++ ){
				int curr = dp[i][k] + dp[k+1][j];
				dp[i][j] = min (dp[i][j], curr + a[i-1]*a[k]*a[j] );
			} // end for
		} // end for
	} // end for

	int res = dp[1][n];
	cout << res << endl;

	return 0;
}