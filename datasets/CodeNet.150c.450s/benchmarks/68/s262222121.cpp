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
	cin >> N;
	while (N) {
		int num[100000];
		for (int i = 0; i < N; i++)cin >> num[i];
		sort(num, num + N);
		int ret = 10000000;
		for (int i = 1; i < N; i++)ret = min(ret, num[i] - num[i - 1]);
		cout << ret << endl;
		cin >> N;
	}
	return 0;
}