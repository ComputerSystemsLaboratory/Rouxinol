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
	cin >> N >> M >> K;
	while (N) {
		ans = 0;
		for (int i = 1; i < K; i++) {
			for (int j = 1; j < K; j++) {
				if (i*(100 + N) / 100 + j*(100 + N) / 100 > K)break;
				if (i*(100 + N) / 100 + j*(100 + N) / 100 == K) {
					ans = max(ans, i*(100 + M) / 100 + j*(100 + M) / 100);
				}
			}
		}
		cout << ans << endl;
		cin >> N >> M >> K;
	}
	return 0;
}