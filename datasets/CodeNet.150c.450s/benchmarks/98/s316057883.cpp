#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>	// require sort next_permutation count etc.
#include <cstdlib>	// require abs
#include <cstdio>	// require printf
#include <functional>
#include <numeric>	// require accumulate
#include <cmath>		// require sqrt ceil floor
#include <climits>	// require INT_MAX etc
#include <limits>
#include <cfloat>
#include <iomanip>	// require setw
#include <sstream>	// require stringstream 
#include <cstring>	// require memset
#include <cctype>	// require tolower, toupper
#include <stdint.h>	// require uint64_t
#include <fstream>	// require freopen

using namespace std;

typedef pair<int, int> P;

int main()
{
//	cut here before submit 
//	freopen ("testcase.ets", "r", stdin );
	int n, m;

	while (cin >> n >> m && n && m){
		vector <int> taro (n, 0 );
		for (int i = 0; i < n; ++i ){
			cin >> taro[i];
		} // end for
		vector <int> hanako (m, 0 );
		for (int j = 0; j < m; ++j ){
			cin >> hanako[j];
		} // end for
		sort (taro.begin(), taro.end() );
		sort (hanako.begin(), hanako.end() );
		
		int res = INT_MAX;
		P res_p;

		for (int i = 0; i < n; ++i ){
			for (int j = 0; j < m; ++j ){
				vector <int> t = taro;
				vector <int> h = hanako;
				P p (t[i], h[j] );
				int temp = t[i];
				t[i] = h[j];
				h[j] = temp;
				int sum_t = accumulate (t.begin(), t.end(), 0 );
				int sum_h = accumulate (h.begin(), h.end(), 0 );
				
				if (sum_t == sum_h ){
					if (res > t[i] + h[j] ){
						res = t[i] + h[j];
						res_p = p;
					} // end if
				} // end if
			} // end for
		} // end for

		if (res == INT_MAX ){
			cout << "-1" << endl;
		}else{
			cout << res_p.first << ' ' << res_p.second << endl;
		} // end if
	} // end loop
		
	return 0;
}