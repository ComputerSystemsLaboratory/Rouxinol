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

const int max_n = 500005;
int a[max_n];
int n; 

void maxHeapify (int i )
{
	int l = 2*i + 1;
	int r = 2*i + 2;
	int largest;

	if (l < n && a[l] > a[i] )
		largest = l;
	else
		largest = i;
	if (r < n && a[r] > a[largest] )
		largest = r;

	if (largest != i ){
		swap (a[i], a[largest] );
		maxHeapify (largest );
	} // end if				
}

int main()
{
	memset (a, 0, sizeof (a ) );
	scanf ("%d", &n );
	rep (i, n ) scanf ("%d", &a[i] );

	for (int i = n - 1; i >= 0; i-- )
		maxHeapify (i );

	rep (i, n ){
		printf (" %d", a[i] );
	} // end rep
	printf ("\n" );	

	return 0;
}