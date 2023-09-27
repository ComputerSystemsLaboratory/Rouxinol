#include<iostream>
#include<string>
using namespace std;
string S, T[10000], U, V, W, X; int n, cnt;

void solve(string A, string B) {
	if (cnt == 0) { T[cnt] = A + B; cnt++; }
	else {
		for (int i = 0; i < cnt; i++) {
			if (A + B == T[i]) {
				goto E;
			}
		}
		T[cnt] = A + B;
		cnt++;
	E:;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < 10000; j++) { T[j] = ""; }
		cin >> S;
		for (int j = 1; j < S.size(); j++) {
			W = "", X = "";
			U = S.substr(0, j);
			V = S.substr(j, S.size() - j);
			for (int k = U.size() - 1; k >= 0; k--) {
				W += U[k];
			}
			for (int k = V.size() - 1; k >= 0; k--) {
				X += V[k];
			}
			solve(U, V);
			solve(V, U);
			solve(U, X);
			solve(X, U);
			solve(V, W);
			solve(W, V);
			solve(W, X);
			solve(X, W);
		}
		cout << cnt << endl;
	}
}