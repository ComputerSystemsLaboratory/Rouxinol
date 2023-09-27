#include <iostream>
#include <queue>
using namespace std;

int n, u, k, v;
int a[100][100] = {{0}};
int b[100];
queue<int> q;

int main() {
	for ( int i = 0; i < 100; i++ )
		b[i] = - 1;
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> u >> k;
		for ( int j = 0; j < k; j++ ) {
			cin >> v;
			a[u - 1][v - 1] = 1;
		}
	}
	b[0] = 0;
	q.push( 0 );
	while ( ! q.empty() ) {
		u = q.front();
		for ( int i = 0; i < n; i++ ) {
			if ( a[u][i] == 1 && b[i] == -1 ) {
				b[i] = b[u] + 1;
				q.push( i );
			}
		}
		q.pop();
	}
	for ( int i = 0; i < n; i++ )
		cout << ( i + 1 ) << " " << b[i] << endl;
}