
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;
int solve();

int main(void) {
	
	while(solve()){}

	return 0;
}

int solve() {

	int m, nmin, nmax;
		cin >> m >> nmin >> nmax;
	if( !(m|nmin|nmax) ) { return 0; }

	vector<int> p(m);
	for( int i = 0; i < m; i++)
		cin >> p[i];

	sort(p.begin(),p.end());

	int ans, gap = 0;
	for( int n = nmax; n >= nmin; n-- ) {
		int j = m - n;
		if( gap < p[j] - p[j-1] ) {
			gap = p[j]-p[j-1];
			ans = n;
		}
	}
	
	cout << ans << endl;

	return 1;

}