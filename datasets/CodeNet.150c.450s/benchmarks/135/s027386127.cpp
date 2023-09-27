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

	cin >> N >> M;
	while (N) {
		vector<int>n(N + 1);
		for (int i = 1; i <= N; i++)cin >> n[i];
		vector<int>m(M + 1);
		for (int i = 1; i <= M; i++)cin >> m[i];
		for (int i = 1; i <= N; i++)n[i] += n[i - 1];
		for (int i = 1; i <= M; i++)m[i] += m[i - 1];
		map<int, int>nm;
		long long int ans = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j <= N; j++) {
				nm[n[j] - n[i]]++;
			}
		}
		for (int i = 0; i < M; i++) {
			for (int j = i + 1; j <= M; j++) {
				ans += nm[m[j] - m[i]];
			}
		}
		cout << ans << endl;
		cin >> N >> M;
	}
	return 0;
}
