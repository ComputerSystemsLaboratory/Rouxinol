#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>data( 7 );
	map<int, int>d;
	for( size_t i = 1; i <= 6; i++ ) {
		cin >> data[i];
		d[data[i]] = i;
	}
	int N;
	cin >> N;
	for( size_t i = 0; i < N; i++ ) {
		int a, b;
		cin >> a >> b;
		int x = d[a], y = d[b];
		if( x == 1 ) {
			switch( y ) {
			case 2:cout << data[3] << endl; break;
			case 3:cout << data[5] << endl; break;
			case 5:cout << data[4] << endl; break;
			case 4:cout << data[2] << endl; break;
			}
			continue;
		}
		if( x == 6 ) {
			switch( y ) {
			case 2:cout << data[4] << endl; break;
			case 4:cout << data[5] << endl; break;
			case 5:cout << data[3] << endl; break;
			case 3:cout << data[2] << endl; break;
			}
			continue;
		}
		if( y == 1 ) {
			switch( x ) {
			case 2:cout << data[4] << endl; break;
			case 4:cout << data[5] << endl; break;
			case 5:cout << data[3] << endl; break;
			case 3:cout << data[2] << endl; break;
			}
			continue;
		}
		if( y == 6 ) {
			switch( x ) {
			case 2:cout << data[3] << endl; break;
			case 3:cout << data[5] << endl; break;
			case 5:cout << data[4] << endl; break;
			case 4:cout << data[2] << endl; break;
			}
			continue;
		}
		if( (x == 2 && y == 3) || (x == 3 && y == 5) || (x == 5 && y == 4) || (x == 4 && y == 2) ) {
			cout << data[1] << endl;
		} else {
			cout << data[6] << endl;
		}
	}

}