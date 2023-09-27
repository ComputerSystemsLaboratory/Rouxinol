#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n, q, ti[100000], nt, ansn[100000], anst[100000], ansc;
string na[100000];
queue<int> qu;

int main() {
	nt = 0;
	ansc = 0;
	cin >> n >> q;
	for ( int i = 0; i < n; i++ ) {
		cin >> na[i] >> ti[i];
		qu.push( i );
	}
	int k = 0;
	int f;
	while ( ! qu.empty() ) {
		f = qu.front();
		if ( ti[f] > q ) {
			nt += q;
			ti[f] -= q;
			qu.push( f );
		} else {
			nt += ti[f];
			ti[f] = 0;
			ansn[ansc] = f;
			anst[ansc] = nt;
			ansc++;
		}
		qu.pop();
	}
	for ( int i = 0; i < n; i++ )
		cout << na[ansn[i]] << " " << anst[i] << endl;
}