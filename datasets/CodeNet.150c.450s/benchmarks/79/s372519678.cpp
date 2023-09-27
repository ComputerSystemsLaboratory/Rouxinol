#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, r;
	while( cin >> n >> r, n&&r ) {
		vector<int>N( n ), M, L;
		iota( N.begin(), N.end(), 1 );
		for( size_t i = 0; i < r; i++ ) {
			int a, b;
			cin >> a >> b;
			a--;
			for( size_t j = 0; j < a; j++ ) {
				M.push_back( *N.rbegin() );
				N.pop_back();
			}
			for( size_t j = 0; j < b; j++ ) {
				L.push_back( *N.rbegin() );
				N.pop_back();
			}
			for( size_t j = 0; j < a; j++ ) {
				N.push_back( *M.rbegin() );
				M.pop_back();
			}
			for( size_t j = 0; j < b; j++ ) {
				N.push_back( *L.rbegin() );
				L.pop_back();
			}
		}
		cout << *N.rbegin() << endl;
	}
}