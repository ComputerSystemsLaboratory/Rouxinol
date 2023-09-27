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
//	freopen ("testcase.PG", "r", stdin );
	int n, m, p;
	while (true ){
		scanf ("%d %d %d", &n, &m, &p );
		if ((n | m | p ) == 0 ) break; 
		m--;
		vector<int> x (n, 0 );

		rep (i, n ){
			scanf ("%d", &x[i] );
		} // end rep
		int sum = accumulate(ALL (x), 0 );		// 売上
		int share = sum*(100-p);	// 配当
		int res = 0;
		if (x[m] != 0 ){
			res = share/x[m];
		} // end if
		printf ("%d\n", res );
	} // end loop
		
	return 0;
}