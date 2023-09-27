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
	cin >> N;
	while (N) {
		ans = 0;
		for (int i = 3; i <= N; i+=2) {
			if (N%i)continue;
			if (N / i >= (i+1)/2) {
				//cout << i << endl;
				ans++;
			}
		}
		for (int i = 2; i <= N; i += 2) {
			if ((N * 2) % i)continue;
			if (!((N * 2 / i) % 2))continue;
			if (N * 2 / i > i) {
				//cout << i << endl;
				ans++;
			}
		}
		cout << ans << endl;
		cin >> N;
	}
	return 0;
}