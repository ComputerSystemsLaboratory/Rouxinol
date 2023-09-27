#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"

using namespace std;

const long long int MOD = 1000000007;


long long int N, M, K, H, W, L, R;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int>e(1000000, MOD);
	e[0] = 0;
	for (int i = 0; i < 1000000; i++) {
		for (int j = 1; j < 1000; j++) {
			int box = i + j * (j + 1)*(j + 2) / 6;
			if (box >= 1000000)break;
			e[box] = min(e[box], e[i] + 1);
		}
	}
	vector<int>o(1000000, MOD);
	o[0] = 0;
	for (int i = 0; i < 1000000; i++) {
		for (int j = 1; j < 1000; j += 4) {
			int box = i + j * (j + 1)*(j + 2) / 6;
			if (box >= 1000000)break;
			o[box] = min(o[box], o[i] + 1);
		}
	}
	cin >> N;
	while (N) {
		cout << e[N] << " " << o[N] << endl;
		cin >> N;
	}
	return 0;
}
