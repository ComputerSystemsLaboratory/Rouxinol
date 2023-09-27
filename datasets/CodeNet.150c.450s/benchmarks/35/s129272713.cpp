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

int main()
{
//	cut here before submit 
//	freopen ("testcase.MSS", "r", stdin );
	int n;
	while (scanf ("%d", &n ), n ){
		vector<int> a (n+1, 0 );
		vector<int> sum (n+1, 0 );
		for (int i = 1; i <= n; i++ ){
			scanf ("%d", &a[i] );
		} // end rep
		for (int i = 1; i <= n; i++ ){
			sum[i] = sum[i-1] + a[i];
		} // end for
		int res = INT_MIN;
		for (int i = 1; i <= n; i++ ){
			int curr = 0;
			for (int j = i; j <= n; j++ ){
				curr = sum[j] - sum[i-1];
				res = max (res, curr );
			} // end for
		} // end for
		printf ("%d\n", res );
	} // end loop
	
	return 0;
}