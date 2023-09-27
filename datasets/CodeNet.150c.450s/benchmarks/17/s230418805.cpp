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
//	cut here before submit 
//	freopen ("testcase.SFN", "r", stdin );
	string str = "";
	while (getline (cin, str ) ){
		vector<int> a (5, 0 );
		stringstream ss (str );
		for (int i = 0; ss >> a[i]; i++ );
		sort (ALL (a ), greater<int>() );
		rep (i, 5 ){
			cout << a[i] << (i != 4 ? ' ' : '\n' );
		} // end rep
	} // end loop
		
	return 0;
}