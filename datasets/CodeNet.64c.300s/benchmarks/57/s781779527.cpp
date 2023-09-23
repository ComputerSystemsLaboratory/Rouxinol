#include <math.h>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int a[10000][10] = {0};

int main(){
	while(true) {
		int x;
		int y;
		cin >> y >> x;
		if ( x == 0 ) break;
		int n = 1;
		for ( int i = 0; i < y; i++ ) {
			for ( int j = 0; j < x; j++ ) {
				cin >> a[j][i];
			}
		}
		int d = 0;
		int m = 0;
		for ( int k = 0; k < ( 1<<(y-1) ); k++ ) {
			int s = 0;
			for ( int j = 0; j < x; j++ ) {
				int c = 0;
				for ( int i = 0; i < y; i++ ) {
					d = k >> i & 1;
					c += a[j][i] ^ d;
				}
				s += max( c , y-c );
			}
			m = max( m , s );
		}
		cout << m << endl;
	}
	return 0;
}