#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M;
	bool s = false;
	string U[256], T[256];

	cin >> N;
	for (int i = 0; i < N; ++i) cin >> U[i];
	cin >> M;
	for (int i = 0; i < M; ++i) {
		cin >> T[i];
		int f = 0;
		for (int j = 0; j < N; ++j) {
			if (T[i] == U[j]) {
				s = !s;
				if (s) cout << "Opened by ";
				else cout << "Closed by ";
				f = 1;
				break;
			}
		}
		if (!f) cout << "Unknown ";
		cout << T[i] << endl;
	}
	return 0;
}