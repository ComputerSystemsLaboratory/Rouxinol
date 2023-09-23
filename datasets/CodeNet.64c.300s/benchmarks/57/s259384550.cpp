#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <set>
#include <cmath>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

#define FOR( i, k, n ) for ( int i = ( k ); i < ( int )( n ); ++i )
#define REP( i, n ) FOR( i, 0, n )

#define MAX_R 10
#define MAX_C 10000

typedef pair< int, int > P;

int main()
{
	int R, C;
	while( cin >> R >> C, R || C ) {
		bool is_failed[ MAX_R ][ MAX_C ];
		REP( i, R ) REP( j , C ) cin >> is_failed[ i ][ j ];

		int ans = 0;
		REP( k, ( 1 << MAX_R ) ) {
			int tmp[ MAX_R ][ MAX_C ];
			// 行をひっくり返す
			REP( i, R ) {
				if( k & ( 1 << i ) ) { REP( j, C ) tmp[ i ][ j ] = !is_failed[ i ][ j ]; }
				else { REP( j, C ) tmp[ i ][ j ] = is_failed[ i ][ j ]; }
			}
			// 列をひっくり返す（カウント）
			int cnt = 0;
			REP( j, C ) {
				int cnttmp = 0;
				REP( i, R ) if( !tmp[ i ][ j ] ) { ++cnttmp; }
				cnt += max( cnttmp, R - cnttmp );
			}
			ans = max( ans, cnt );
		}

		cout << ans << endl;
	}
	return 0;
}