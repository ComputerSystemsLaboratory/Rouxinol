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

bool used1[4], used2[4];

int main()
{
//	cut here before submit 
//	freopen ("testcase.HB", "r", stdin );
	while (1 ){
		memset (used1, false, sizeof (used1 ) );
		memset (used2, false, sizeof (used2 ) );

		string s1 = "", s2 = "";
		getline (cin, s1 );
		getline (cin, s2 );
		if (s1.empty() || s2.empty() ) break;
		int hit = 0, blow = 0;
		vector<int> a (4, 0 ), b (4, 0 );
		stringstream ssa (s1 ), ssb (s2 );
		rep (i, 4 ) ssa >> a[i];
		rep (j, 4 ) ssb >> b[j];

		rep (i, 4 ){
			if (a[i] == b[i] ){
				hit++;
				used1[i] = true; used2[i] = true;
			} // end if
		} // end rep
		rep (i, 4 ){
			rep (j, 4 ){
				if (!used1[i] && !used2[j] && a[i] == b[j] ){
					blow++;
					used1[i] = true;
					used2[j] = true;
				} // end if
			} // end rep
		} // end rep
		cout << hit << ' ' << blow << endl;
	} // end loop
		
	return 0;
}