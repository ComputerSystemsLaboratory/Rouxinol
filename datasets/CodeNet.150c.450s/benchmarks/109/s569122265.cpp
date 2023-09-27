#include <bits/stdc++.h>
using namespace std;

typedef pair<vector<int>, bool> PVIB;

int main() {
	int N;
	while( cin >> N, N ) {
		vector<int>T( 3 );
		priority_queue<PVIB, vector<PVIB>, greater<PVIB>>que;
		for( size_t i = 0; i < N; i++ ) {
			for( int j = 1; j >= 0; j-- ) {
				char c;
				cin >> T[0] >> c >> T[1] >> c >> T[2];
				que.push( make_pair( T, j ) );
			}
		}
		int now = 0, ans = 0;
		while( que.size() ) {
			auto X = que.top(); que.pop();
			if( X.second ) {
				now++;
				ans = max( now, ans );
			} else {
				now--;
			}
		}
		cout << ans << endl;
	}
}