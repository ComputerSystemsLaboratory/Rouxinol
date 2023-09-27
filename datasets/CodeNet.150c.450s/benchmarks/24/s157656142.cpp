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

typedef long long ll;
typedef pair< int, int > P;

int main()
{
	int N, M;
	while( cin >> N >> M, N || M ) {
		priority_queue< P > que;
		REP( i, N ) {
			int d, p;
			cin >> d >> p;
			que.push( P( p, d ) );
		}
		int ans = 0;
		while( !que.empty() ) {
			int d = que.top().second, p = que.top().first;  que.pop();
			if( M >= d ) M -= d;
			else if( M > 0 ) {
				ans += ( d - M ) * p;
				M = 0;
			}
			else ans += d * p;
		}
		cout << ans << endl;
	}
	return 0;
}