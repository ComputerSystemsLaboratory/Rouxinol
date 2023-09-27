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

int partition(vector<int> & a, vector<char> & b, int p, int r )
{
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++ ){
		if (a[j] <= x ){
			i++;
			swap (a[i], a[j] );
			swap (b[i], b[j] );
		} // end dif
	} // end for
	swap (a[i+1], a[r] );
	swap (b[i+1], b[r] );

	return i+1;
}

void quick_sort (vector<int> &a, vector<char> &b, int p, int r )
{
	if (p < r ){
		int q = partition (a, b, p, r );
		quick_sort (a, b, p, q-1 );
		quick_sort (a, b, q+1, r );
	} // end if
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	vector<int> a(n, 0 );
	vector<char> b(n, 0 );

	set<int> suit; suit.clear();

	rep (i, n ){
		cin >> b[i] >> a[i];
		suit.insert (a[i] );
	} // end rep

	map<int,int> cnt; cnt.clear();
	set<int>::iterator it = suit.begin();
	int m = 0;
	for (; it != suit.end(); it++ ){
		int num = (*it);
		cnt[num] = m++;
	} // end for		

	vector<string> str(m, "" );
	rep (i, n ) str[cnt[a[i]]] += b[i];

	quick_sort (a, b, 0, n-1 );

	bool is_stable = true;
	rep (i, n ){
		string s = str[cnt[a[i]]];
		if ( s[0] == b[i] ){
			str[cnt[a[i]]] = s.substr(1);
		}else{
			is_stable = false;
			break;
		} // end if
	} // end rep		

	cout << (is_stable ? "Stable" : "Not stable" ) << endl;
	rep (i, n ) cout << b[i] << ' ' << a[i] << endl;

	return 0;
}