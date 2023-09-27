#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long T;
long long N, A[1 << 18];
char C[1 << 18];

vector<long long> Gauss(vector<long long> F) {
	sort(F.begin(), F.end());
	reverse(F.begin(), F.end());

	for (int i = 59; i >= 0; i--) {
		int cl = F.size();
		for (int j = 0; j < F.size(); j++) {
			if (F[j] < (1LL << (i + 1))) { cl = j; break; }
		}
		if (cl == F.size() || (F[cl] / (1LL << i)) % 2LL == 0) continue;
		for (int j = 0; j < F.size(); j++) {
			if (j == cl) continue;
			if ((F[j] / (1LL << i)) % 2LL != 0) F[j] ^= F[cl];
		}

		sort(F.begin(), F.end());
		reverse(F.begin(), F.end());
	}
	while (F.size() >= 1 && F[F.size() - 1] == 0) F.pop_back();
	return F;
}

int main() {
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> N;
		for (int j = 1; j <= N; j++) cin >> A[j];
		for (int j = 1; j <= N; j++) cin >> C[j];

		vector<long long> V; bool flag = false;
		for (int j = N; j >= 1; j--) {
			if (C[j] == '0') {
				V.push_back(A[j]);
				V = Gauss(V);
			}
			else {
				vector<long long> V2 = V;
				V2.push_back(A[j]);
				V2 = Gauss(V2);
				if (V.size() != V2.size()) flag = true;
			}
		}

		if (flag == true) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}