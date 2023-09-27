#include <bits/stdc++.h>
using namespace std;

int main() {
	for( ;; ) {
		int n;
		cin >> n;

		if( n == 0 ) { break; }

		vector<int> a( n );
		for( auto& v: a ) { cin >> v; }

		int result = 1000000;

		for( int i = 0; i < n; ++i ) {
			for( int j = i+1; j < n; ++j ) {
				result = min( result, abs( a.at(i) - a.at(j) ) );
			}
		}

		cout << result << endl;
	}
}

