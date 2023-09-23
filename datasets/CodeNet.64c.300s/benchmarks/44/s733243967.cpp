#include<iostream>
using namespace std;

const int NUM = 15;

int main() {
	int wf[NUM][NUM];
	int n;
	while ( cin >> n , n ) {
		for ( int i = 0 ; i < NUM ; i++ ) {
			for ( int j = 0 ; j < NUM ; j++ ) {
				if ( i == j ) {
					wf[i][j] = 0;
				} else {
					wf[i][j] = 1000000;
				}
			}
		}
		
		int m=0;
		
		int a,b,c;
		for ( int i = 0 ; i < n ; i++ ) {
			cin >> a >> b >> c;
			wf[a][b] = wf[b][a] = c;
			if ( a > m ) {
				m = a;
			} if ( b > m ) {
					m = b;
			}
		}
		m++;
		for ( int a = 0 ; a < m ; a++ ) {
			for ( int b = 0 ; b < m ; b++ ) {
				for ( int c = 0 ; c < m ; c++ ) {
					wf[b][c] = min ( wf[b][c] , wf[b][a] + wf[a][c] );
				}
			}
		}
		int loc,sec = 1000000;
		for ( int a = 0 ; a < m ; a++ ) {
			int nsec = 0;
			for ( int b = 0 ; b < m ; b++ ) {
				nsec += wf[a][b];
			}
			if ( nsec < sec ) {
				loc = a;
				sec = nsec;
			}
		}
		cout << loc << " " << sec << endl;
	}
}