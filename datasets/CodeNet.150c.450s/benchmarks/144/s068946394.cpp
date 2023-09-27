#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m, l;
	int A[101][101] = {};
	int B[101][101] = {};
	ll C[101][101] = {};
	cin >> n >> m >> l;
	REP(i, n) {
		REP(j, m) {
			cin >> A[i][j];
		}
	}
	
	REP(i, m) {
		REP(j, l) {
			cin >> B[i][j];
		}
	}
	
	REP(i, n) {
		REP(j, l) {
			REP(k, m) {
				C[i][j] += (A[i][k] * B[k][j]);
			}
		}
	}
	
	REP(i, n) {
		REP(j, l) {
			cout << C[i][j];
			if(j == l - 1) cout << "\n";
			else cout << " ";
		}
	}
	
	return 0;
}