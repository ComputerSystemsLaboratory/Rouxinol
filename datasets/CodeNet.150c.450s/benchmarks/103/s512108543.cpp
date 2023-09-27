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
int n, s;
int ans;

void dfs (int curr, int depth, int sum )
{
	if (sum > s ) return;

	if (depth == n ){
		if (sum == s ) ans++;
		return;
	} // end if

	if (curr >= 10 ) return;

	dfs (curr+1, depth, sum );
	dfs (curr+1, depth+1, sum + curr );
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.sum_of_integers", "r", stdin );
	while (scanf ("%d %d", &n, &s ) ){
		if (n == 0 && s == 0 ) break;
		ans = 0;
		dfs (0, 0, 0 );
		printf ("%d\n", ans );
	} // end loop
		
	return 0;
}