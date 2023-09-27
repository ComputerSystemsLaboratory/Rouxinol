#include "bits/stdc++.h"

#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef long long ll;


void solve() {
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	int r, c;
	cin >> r >> c;
	vector<vector<int>> v(r + 1, vector<int>(c + 1));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> v[i][j];
			v[i][c] += v[i][j];
			v[r][j] += v[i][j];
			v[r][c] += v[i][j];
		}
	}

	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c; j++) {
			cout << v[i][j] << " ";
		}
		cout << v[i][c] << endl;
	}
}




int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);


	solve();
#ifdef _WIN32
	system("PAUSE");
#endif
	return 0;
}