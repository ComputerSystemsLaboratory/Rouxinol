#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> g( n );
	for( int i = 0; i < m; i++ ) {
		int s, t;
		cin >> s >> t;
		g[s].push_back( t );
		g[t].push_back( s );
	}
	vector<int> color( n );
	int col = 0;
	for( int i = 0; i < n; i++ ) {
		if( color[i] > 0 ) continue;
		col++;
		color[i] = col;
		queue<int> que;
		que.push( i );
		while( !que.empty() ) {
			int u = que.front();
			que.pop();
			for( auto v : g[u] ) {
				if( color[v] > 0 ) continue;
				que.push( v );
				color[v] = col;
			}
		}
	}

	int q;
	cin >> q;
	for( int i = 0; i < q; i++ ) {
		int s, t;
		cin >> s >> t;
		string ans = "no";
		if( color[s] == color[t] ) ans = "yes";
		cout << ans << endl;
	}
}

