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



int main() {
	ios::sync_with_stdio(false);
	cin >> N >> L >> R;
	while (N) {
		int num[1000] = {};
		for (int i = 0; i < N; i++)cin >> num[i];
		sort(num, num + N);
		reverse(num, num + N);
		num[N] = 0;
		pair<int, int>ret = { 0,0 };
		for (int i = L; i <= R; i++) {
			ret = max(ret, { num[i - 1] - num[i],i });
		}
		cout << ret.second << endl;
		cin >> N >> L >> R;
	}
	return 0;
}