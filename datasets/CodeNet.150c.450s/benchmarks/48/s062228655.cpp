#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	while( cin >> N, N ) {
		long long int ans = LLONG_MAX;
		for( long long int x = 0; x*x*x <= N&&x <= ans; x++ ) {
			for( long long int y = 0; x*x*x + y*y <= N&&x + y <= ans; y++ ) {
				ans = min( ans, x + y + N - x*x*x - y*y );
			}
		}
		cout << ans << endl;
	}
}