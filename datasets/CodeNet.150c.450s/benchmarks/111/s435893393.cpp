#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> DataInfo;
unsigned long long int DpResult[100][21];

void solve() {
	int add, sub;

	DpResult[0][DataInfo[0]] = 1;
	for (int i = 0; i < N - 2; ++i) {
		for (int j = 0; j < 21; ++j) {
			if (DpResult[i][j] == 0) {
				continue;
			}
			add = j + DataInfo[i + 1];
			sub = j - DataInfo[i + 1];

			if (add >= 0 && add < 21) {
				DpResult[i + 1][add] += DpResult[i][j];
			}
			if (sub >= 0 && sub < 21) {
				DpResult[i + 1][sub] += DpResult[i][j];
			}
		}
	}
	cout << DpResult[N - 2][DataInfo[N - 1]] << endl;
}

int main() {
	int num;

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		DataInfo.push_back(num);
	}
	memset(DpResult, 0, sizeof(DpResult));
	solve();

	return 0;
}
