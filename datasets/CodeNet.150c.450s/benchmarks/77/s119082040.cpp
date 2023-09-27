#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	while( cin >> N, N ) {
		vector<vector<bool>>d( 21, vector<bool>( 21 ) );
		for( size_t i = 0; i < N; i++ ) {
			int a, b;
			cin >> a >> b;
			d[a][b] = 1;
		}
		cin >> M;
		int nowx = 10, nowy = 10;
		for( size_t i = 0; i < M; i++ ) {
			char c;
			cin >> c;
			int p;
			cin >> p;
			int nextx = 0, nexty = 0;
			switch( c ) {
			case 'N':
			{
				nexty++;
				break;
			}
			case 'S':
			{
				nexty--;
				break;
			}
			case 'E':
			{
				nextx++;
				break;
			}
			case 'W':
			{
				nextx--;
				break;
			}
			}
			for( size_t i = 0; i < p; i++ ) {
				nowx += nextx;
				nowy += nexty;
				if( d[nowx][nowy] ) {
					N--;
					d[nowx][nowy] = 0;
				}
			}
		}
		cout << (N == 0 ? "Yes" : "No") << endl;
	}
}