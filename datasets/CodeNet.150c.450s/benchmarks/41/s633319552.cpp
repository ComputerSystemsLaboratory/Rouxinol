#include<bits/stdc++.h>
using namespace std;

long long v, e,  a[105][105], b[105][105], s, t, d, inf = 1e18;

int main(){
	for( int i = 0 ; i < 104 ; i++ ){
		for( int j = 0 ; j < 104 ; j++ ){
			a[i][j] = inf;
			if( i == j ) a[i][j] = 0;
		}
	}
	cin >> v >> e;
	
	for( int i = 0 ; i < e ; i++ ){
		cin >> s >> t >> d;
		a[s][t] = d;
	}
	
	for( int k = 0 ; k < v ; k++ ){
		for( int i = 0 ; i < v ; i++ ){
			for( int j = 0 ; j < v ; j++ ){
				a[i][j] = min( a[i][j], a[i][k] + a[k][j] );
			}
		}
	}
	
	for( int i = 0 ; i < v ; i++  ){
		for( int j = 0 ; j < v ; j++ ){
			b[i][j] = a[i][j];
		}
	}
	
	for( int k = 0 ; k < v ; k++ ){
		for( int i = 0 ; i < v ; i++ ){
			for( int j = 0 ; j < v ; j++ ){
				b[i][j] = min( b[i][j], b[i][k] + b[k][j] );
			}
		}
	}
	
	for( int i = 0 ; i < v ; i++  ){
		for( int j = 0 ; j < v ; j++ ){
			if( a[i][j] != b[i][j] ){
				cout << "NEGATIVE CYCLE" << endl;
				exit(0);
			}			 
		}
	}
		
	for( int i = 0 ; i < v ; i++  ){
		for( int j = 0 ; j < v ; j++ ){
			if( j != 0 ) cout << ' ';
			if( a[i][j] > 2e9 ) cout << "INF";
			else cout << a[i][j]; 
		}
		cout << endl;
	}
}

