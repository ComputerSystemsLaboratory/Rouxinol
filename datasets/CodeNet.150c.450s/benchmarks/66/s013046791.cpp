#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, M;
	string S;
	bool open = false;
	cin >> N;
	map<string, bool> mp;
	for (int i = 0; i < N; i++) {
		cin >> S;
		mp[S] = true;
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> S;
		if (!mp[S]) {
			cout << "Unknown " << S << endl;
		}
		else {
			if (open) cout << "Closed by " << S << endl;
			else cout << "Opened by " << S << endl;
			open = !open;
		}
	}
}
