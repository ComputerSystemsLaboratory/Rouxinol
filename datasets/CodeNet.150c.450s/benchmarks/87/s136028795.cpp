#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main() {
	int n;
	array<int, 5> tmp;

	while( 1 ) {
		cin >> n; if( n == 0 ) break;

		vector<array<int, 5>> p( n );
		REP( i, n ) {
			REP( j, 5 ) {
				cin >> tmp[j];
			}
			p[i] = tmp;
		}

		int m = 0, score = 0;
		while( 1 ) {
			FOR( i, m, n ) {
				int cnt = 0;
				REP( j, 5 ) {

					int tmp = p[i][j];
					if( j != 4 && p[i][j + 1] == tmp ) {
						cnt++;
					} else {
						if( cnt >= 2 ) {
							score += ( cnt + 1 ) * p[i][j];
							REP( k, cnt + 1 ) {
								if( i == 0 ) {
									p[i][j - k] = 0;
								} else {
									REP( l, i ) {
										p[i - l][j - k] = p[i - l - 1][j - k];
									}
									p[0][j - k] = 0;

								}

							}

						}
						cnt = 0;
					}

				}

			}
			m++;
			if( m == n ) break;
		}


		cout << score << endl;
	}

}
