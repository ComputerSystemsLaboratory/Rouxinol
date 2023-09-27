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
ll f[22];

int main()
{
//	cut here before submit 
//	freopen ("testcase.dat", "r", stdin );
	memset (f, 0LL, sizeof (f ) );
	f[0] = 1LL;
	f[1] = 1LL;
	for (int i = 2; i <= 20; i++ ){
		f[i] = (ll)i*f[i-1];
	} // end for
/*
	rep (i, 21 ){
		cout << f[i] << endl;
	} // end rep
*/
	string str = "";
	while (getline (cin, str ) ){
		stringstream ss (str );
		int n;
		ss >> n;
		cout << f[n] << endl;
	} // end loop
		
	return 0;
}