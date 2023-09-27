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
	
	int r, c;
	int matrix[101][101] = {};
	cin >> r >> c;
	REP(i, r) {
		REP(j, c) {
			cin >> matrix[i][j];
		}
	}
	
	REP(i, r + 1) {
		REP(j, c + 1) {
			cout << matrix[i][j];
			if(j != c) {
				cout << " ";
				if(i != r) matrix[i][c] += matrix[i][j];
			} else {
				cout << "\n";
			}
			matrix[r][j] += matrix[i][j];
		}
	}
	
	return 0;
}