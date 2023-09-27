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
	int N;
	while (scanf ("%d", &N ), N  ){
		vector<P> v; v.clear();
		rep (i, N ){
			int h1, m1, s1, h2, m2, s2;
			scanf ("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2 );
			v.push_back (P (h1*60*60 + m1*60 + s1, 1 ) );
			v.push_back (P (h2*60*60 + m2*60 + s2,-1 ) );
		} // end rep
		sort (ALL (v ) );

		int res = 0;
		int cur = 0;
		rep (i, v.size() ){
			cur += v[i].second;
			res = max (res, cur );
		} // end rep
		cout << res << endl;
	} // end while
		
	return 0;
}