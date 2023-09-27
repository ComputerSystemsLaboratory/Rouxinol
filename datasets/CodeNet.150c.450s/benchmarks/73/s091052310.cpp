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

const int MAX_N = 100005;
int bit[MAX_N], n;

void add (int i, int x ){
	
	while (i <= n ){
		bit[i] += x;
		i += i & (-i);
	} // end while
}

int sum (int i ){
	
	int s = 0;
	while (i > 0 ){
		s += bit[i];
		i -= i & (-i);
	} // end while

	return s;
}

void init_bit (void ){
	n = 0;
	memset (bit, 0, sizeof (bit ) );
}

int main()
{
	init_bit ();
	int q;
	scanf ("%d %d", &n, &q );

	rep (i, q ){
		int com, x, y; scanf ("%d %d %d", &com, &x, &y );
		if (com == 0 ){
			add (x, y );
		}else{
			int s = sum (y );
			int t = sum (x-1 );
			int res = s - t;
			printf ("%d\n", res );
		} // end if 
	} // end rep
		
	return 0;
}