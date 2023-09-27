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

void Counting_Sort (vector<int> a, vector<int> & b, int k )
{
	vector<int> c(k+1, 0 );
	for (int j = 0; j < a.size(); j++ ){
		c[a[j]]++;
		/* c[i] には i の出現数が記録されている */
	} // end for
	for (int i = 1; i <= k; i++ ){
		c[i] += c[i-1];
		/* c[i] には i 以下の数の出現数が記録されている */
	} // end for
	for (int j = a.size() - 1; j >= 0; j-- ){
		b[c[a[j]]] = a[j];
		c[a[j]]--;
	} // end for		
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	vector<int> a (n, 0 ), b(n + 1, 0 );
	int k = 0;
	rep (i, n ) cin >> a[i], k = max (k, a[i] );

	Counting_Sort (a, b, k );
	for (int i = 1; i <= n; i++ ) cout << b[i] << ( i != n ? ' ' : '\n' );
		
	return 0;
}