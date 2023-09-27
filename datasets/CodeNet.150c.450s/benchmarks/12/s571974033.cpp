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
#define INF (1<<31)

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int max_n = 512;
int heap[max_n];

int main()
{
	rep (i, max_n ) heap[i] = INF;

	int n; scanf ("%d", &n );
	rep (i, n ) scanf ("%d",  &heap[i] );

	rep (i, n ){
		printf ("node %d: key = %d, ", i+1, heap[i] );
		if (i != 0 ){
			printf ("parent key = %d, ", heap[(i-1)/2] );
		} // end if

		if (heap[2*i+1] != INF ){
			printf ("left key = %d, ", heap[2*i+1] );
		} // end if
		if (heap[2*i+2] != INF ){
			printf ("right key = %d, ", heap[2*i+2] );
		} // end if
		printf ("\n" );
	} // end rep
		
	return 0;
}