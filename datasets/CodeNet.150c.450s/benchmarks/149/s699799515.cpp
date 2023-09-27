/* ---- I.T.N.O.G ----  */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MAXlog = 60, MAX = 1e4+1, inf = 1e18+1, mod = 1e9+7;

ll x, y, q,f, n, p[MAX];

ll fnd (int x) {
	return ( p[x] == x ? x : p[x] = fnd(p[x]) );
}

void unt ( int x , int y ) {
	p[fnd(y)] = fnd(x);
}

bool is (int x, int y) {
	return fnd(y) == fnd(x);
}

int main() {
	
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> q;
	for (int i = 0; i < n; i++) p[i] = i;
	while (q--) {
		cin >> f >> x >> y;
		if (!f)
			unt ( x , y );
		else
			cout << (is (x, y) ? 1 : 0) << endl;
	}
	return 0;


}