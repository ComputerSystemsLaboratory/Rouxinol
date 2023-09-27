#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N; cin >> N;
	vector<string> U(N);
	for (int i = 0; i < N;i++) cin >> U[i];
	int M; cin >> M;
	bool lock = true;
	string T;
	for (int i = 0; i < M;i++) {
		cin >> T;
		if (find(U.begin(), U.end(), T) == U.end()) {
			cout << "Unknown " << T << endl;
		}
		else {
			if (!lock) {
				cout << "Closed by " << T << endl;
				lock = true;
			}
			else {
				cout << "Opened by " << T << endl;
				lock = false;
			}
		}
	}
}