#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p;
	while( cin >> n >> p, n || p ) {
		vector<int>data( n );
		int now = 0, P = p;
		while( 1 ) {

			for( size_t i = 0; i < n; i++ ) {
				data[i] += p / n;
			}

			p %= n;

			for( size_t i = 0; i < p; i++ ) {
				now++;
				now %= n;
				data[now]++;
			}

			now++; now %= n;
			while( !data[now] ) {
				now++; now %= n;
			}
			p = data[now];
			if( P == p ) {
				break;
			}
			data[now] = 0;
			//cout << p << P << endl;
			//cout << data[0] << data[1] << data[2] << endl;
		}
		now--;
		if( now < 0 ) {
			now = n - 1;
		}
		cout << now << endl;
	}
}