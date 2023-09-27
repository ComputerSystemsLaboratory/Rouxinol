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
	ios_base::sync_with_stdio(0);
	int N; cin >> N;
	vector<ll> r(N, 0 );
	rep (i, N ) cin >> r[i];

	ll minv = r[0];
	ll res = -(1LL<<60);
	for (int i = 1; i < N; i++ ){
		if (r[i] - minv > res ) res = r[i] - minv;
		if (minv > r[i] ) minv = r[i];
	} // end rep
	cout << res << endl;	
		
	return 0;
}