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
typedef pair<int,int> P;
const int MAX_N = (int)1e4 + 4;
P DP[MAX_N];
int main()
{
	ios_base::sync_with_stdio(0);
	int N, M;
	while (cin >> N >> M, N ){
		rep (i, N ){
			int d, p; cin >> d >> p;
			DP[i].first = -p, DP[i].second = d;
		} // end rep
		sort (DP, DP+N );

		int res = 0;
		int j = -1;
		for (int i = 0; i < N; i++ ){
			if (M - DP[i].second < 0 ){
				j = i;	
				break;
			} // end if
			M -= DP[i].second;
		} // end for
				 
		if (j != -1 ){
			res -= DP[j].first*(DP[j].second - M);
			j++;
			for (; j<N; j++ ){
				res -= DP[j].first*DP[j].second;
			} // end for
		} // end if
		cout << res << endl;
	} // end while

	return 0;
}