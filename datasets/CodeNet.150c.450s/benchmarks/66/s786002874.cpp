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

const string meg[3] = {"Opened by", "Closed by", "Unknown" };

int main()
{
	set<string> id; id.clear();
	ios_base::sync_with_stdio(0);
	int N; cin >> N;
	rep (i, N ){
		string s; cin >> s;
		id.insert (s );
	} // end rep
	bool state = false;	// close state
	int M; cin >> M;
	rep (j, M ){
		string t; cin >> t;
		if (!id.count (t ) ){
			cout << meg[2] << ' ' << t << endl;
		}else{
			cout << meg[state] << ' ' << t << endl;
			state =!state;
		} // end if
	} // end rep
	
	return 0;
}