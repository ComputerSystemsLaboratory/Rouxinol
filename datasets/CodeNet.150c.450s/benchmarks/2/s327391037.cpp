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

int partition(vector<int> & a, int p, int r )
{
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++ ){
		if (a[j] <= x ){
			i++;
			swap (a[i], a[j] );
		} // end dif
	} // end for
	swap (a[i+1], a[r] );

	return i+1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	vector<int> a(n, 0 );
	rep (i, n ) cin >> a[i];
	int base = partition (a, 0, n-1 );
	rep (i, n ){
		if (i == base ){
			cout << '[' << a[i] << ']';
		}else{
			cout << a[i];
		} // end if
		cout << (i != n - 1 ? ' ' : '\n' );
	} // end rep

	return 0;
}