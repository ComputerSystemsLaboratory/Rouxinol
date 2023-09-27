#include <iostream>
using namespace std;
typedef long long llong;

int N, K, W[100000];

int check(llong P) {
	int v = 1;
	llong sum = 0;
	for (int i = 0; i < N; i++) {
		if (W[i] > P) {
			return -1;
		}
		if (sum + W[i] > P) {
			sum = 0;
			v++;
		}
		sum += W[i];
	}
	return v;
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> W[i];
	llong low = 0, high = 10000 * 100000, mid;
	int v;
	while (high - low > 1) {
		mid = (low + high) / 2;
		v = check(mid);
		//cout << "v:" << v << " mid:" << mid << " low:" << low << " high:" << high << endl;
		if (v > K) {
			low = mid;
		}
		else if (v >= 0) {
			high = mid;
		}
		else {
			low = mid;
		}
	}
	cout << high << endl;
	return 0;
}