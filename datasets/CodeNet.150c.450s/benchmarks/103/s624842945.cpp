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
vector<int> sum[10][50];
 
int main()
{
//	cut here before submit 
//	freopen ("testcase.sum_of_integers", "r", stdin );
	int n, s;
	while (scanf ("%d %d", &n, &s ) ){
		if (n == 0 && s == 0 ) break;
		rep (i, 10 )rep (j, 50 ) sum[i][j].clear();

		rep (i, 10 ){
			sum[0][i].push_back (1<<i);
		} // end rep

		for (int i = 1; i < n; i++ ){
			for (int j = 0; j < 50; j++ ){
				if (!sum[i-1][j].empty() ){
					rep (k, sum[i-1][j].size() ){
						rep (num, 10 ){
							if (!(sum[i-1][j][k] & (1<<num) ) && j+num < 50 ){
								sum[i][j+num].push_back (sum[i-1][j][k] | (1<<num) );
							} // end if
						} // end rep
					} // end rep
				} // end if
			} // end for
		} // end for

		set<int> ans; ans.clear();
		rep (i, sum[n-1][s].size() ){
			ans.insert (sum[n-1][s][i] );
		} // end rep
		int res = ans.size();
		printf ("%d\n", res );
	} // end loop
		
	return 0;
}