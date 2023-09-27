#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "math.h"
#include "utility"
#include "string"
#include "map"
#include "unordered_map"
#include "iomanip"
#include "random"

using namespace std;
const long long int MOD = 1000000007;

long long int power(long long int x, long long int n, long long int M) {
	long long int tmp = 1;

	if (n > 0) {
		tmp = power(x, n / 2, M);
		if (n % 2 == 0) tmp = (tmp*tmp) % M;
		else tmp = (((tmp*tmp) % M)*x) % M;
	}
	return tmp;
}

long long int N, M, K, Q, W, H, L, R;
long long int ans;

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M >> K >> Q >> L;
	while (N) {
		ans = 0;
		int num[100];
		for (int i = 0; i < N; i++) {
			cin >> num[i];
		}
		for (int i = 0; i <= 10001; i++) {
			if (num[ans] == L)ans++;
			L = (L*M + K) % Q;
			if (ans == N) {
				ans = i;
				break;
			}
			if (i == 10001)ans = 10001;
		}
		if (ans == 10001)cout << "-1\n";
		else cout << ans << endl;
		cin >> N >> M >> K >> Q >> L;
	}
	return 0;
}