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
#include "numeric"

using namespace std;

const long long int MOD = 1000000007;

long long int N, M, K, H, W, L, R;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int>v(31);
	for (int i = 0; i < 28; i++) {
		cin >> N;
		v[N]++;
	}
	for (int i = 1; i <= 30; i++) {
		if (!v[i])cout << i << endl;
	}
	return 0;
}
