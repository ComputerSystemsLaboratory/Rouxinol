#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main() {
	int n, p;

	while( 1 ) {
		cin >> n >> p;
		if( n == 0 && p == 0 ) break;

		vector<int> stone( n );
		int j = 0, ok = p;
		while( 1 ){
			bool flag = false;
			for( int i = 0; i < p; i++ ) { stone[j % n]++; j++; }
			p = 0;
			while( 1 ) {
				if( stone[j % n] > 0 ) {
					if( stone[j % n] == ok ) { cout << j % n << endl; flag = true; }
					p = stone[j % n];
					stone[j % n] = 0;
					j++;
					break;
				}
				j++;
			}
			if( flag ) break;
		}	
	}

}
