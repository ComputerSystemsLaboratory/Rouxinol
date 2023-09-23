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

int fib[46];

int main()
{
	memset (fib, 0, sizeof (fib ) );
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < 46; i++ ){
		fib[i] = fib[i-1] + fib[i-2];
	} // end for

	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	printf ("%d\n", fib[n] );
		
	return 0;
}