#include"bits/stdc++.h"

#define rep(i, N) for(int i = 0;i < N;i++)

typedef long long ll;

const int mod = 1e9 + 7;

using namespace std;



int main(void) {
	//========================================
	
	int D; cin >> D;
	vector<int> c(26); rep(i, 26)cin >> c[i];
	vector<vector<int>> s(D, vector<int>(26));
	rep(i, D) {
		rep(j, 26)cin >> s[i][j];
	}

	//=========================================

	srand(time(NULL));
	vector<int> t(D);
	rep(i, D) {
		cin >> t[i];
		t[i]--;
	}
	
	//=========================================

	vector<int> last(26, 0);
	int v = 0;
	rep(i, D) {
		v += s[i][t[i]];
		last[t[i]] = i + 1;
		rep(j, 26) {
			v -= c[j] * (i + 1 - last[j]);
		}
		cout << v << endl;
	}

	//=========================================

	return 0;
}