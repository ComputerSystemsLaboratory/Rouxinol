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
int Y[105];
int next_rnd(int A, int B, int C, int X ){
	return (A*X + B) % C;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N, A, B, C, X;
	while (cin >> N >> A >> B >> C >> X, N ){
		memset (Y, 0, sizeof (Y ) );
		rep (i, N ) cin >> Y[i];
		int cur = 0;
		int cnt = 1;
		int res = -1;
		if (Y[cur] == X ){
			cur++;
		} // end if
		if (cur == N ){
			res = 0;
		} // end if
		if (res != 0 ){
			while (cnt <= 10000 ){
				int nextX = next_rnd(A, B, C, X );   		
				if (Y[cur] == nextX ){
					cur++;
					if (cur == N ){
						res = cnt;
						break;
					} // end if	
				} // end if
				X = nextX;
				cnt++;
			} // end while
		} // end if
		cout << res << endl;

	} // end while

	return 0;
}