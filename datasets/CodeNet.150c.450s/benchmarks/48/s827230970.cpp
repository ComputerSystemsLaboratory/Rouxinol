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
#define INF 1<<30

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main()
{
//	cut here before submit 
//	freopen ("testcase.SCG", "r", stdin );
	int e;
	while (scanf ("%d", &e ), e ) {
		int m = INF;
		for (int z = 0; z*z*z <= e; z++ ){
			for (int y = 0; y*y <= e - z*z*z; y++ ){
				int x = e - z*z*z - y*y;
				if (x >= 0 ){
					m = min (m, x + y + z );
				} // end if
			} // end for
		} // end for
		printf ("%d\n", m );
	} // end loop
		
	return 0;
}