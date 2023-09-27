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
	int box = 333 * 590 + 1;
	for (int i = 0; i < N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		int bag = 0;
		bag += (a - 1) / 3 * 590;
		if (a % 3 == 0) {
			bag += 390;
			bag += (b - 1) * 20;
			bag += c;
		}
		else  {
			if (a % 3 == 2)bag += 195;
			for (int j = 1; j < b; j++) {
				if (j % 2)bag += 20;
				else bag += 19;
			}
			bag += c;
		}
		cout << box - bag << endl;
	}
	return 0;
}