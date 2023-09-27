#include <bits/stdc++.h>

#define MAX ((int)110)
#define endl '\n'

using namespace std;

typedef long long ll;

int n, m[ MAX ];
ll DP[ MAX ][ MAX ];

ll solve(){
	int j;
	ll cost;
	for(int len = 2 ; len <= n ; len++){
		for(int i = 1 ; i <= n - len + 1 ; i++){
			j = i + len - 1;
			DP[ i ][ j ] = LONG_LONG_MAX;
			for(int k = i ; k < j ; k++){
				cost = DP[ i ][ k ] + DP[ k + 1 ][ j ] + m[ i - 1 ] * m[ k ] * m[ j ];
				DP[ i ][ j ] = min(DP[ i ][ j ], cost);
			}
		}
	}
	return DP[ 1 ][ n ];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m[ 0 ];
	for(int i = 1 ; i < n ; i++)
		cin >> m[ i ] >> m[ i + 1 ];
	cin >> m[ n ];
	cout << solve() << endl;
	return 0;
}
