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
	cin >> N >> M;
	while (N) {
		int t[101] = {};
		int h[101] = {};
		int ts = 0;
		int hs = 0;
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;
			t[a]++;
			ts += a;
		}
		for (int i = 0; i < M; i++) {
			int a;
			cin >> a;
			h[a]++;
			hs += a;
		}
		int box = ts - hs;
		box /= 2;
		if (abs(ts - hs) % 2) {
			cout << "-1" << endl;
		}
		else {
			for (int i = 1; i <= 101; i++) {
				if (i == 101) {
					cout << "-1\n";
					break;
				}
				if (i - box >= 1 && i - box <= 100) {
					if (t[i] && h[i - box]) {
						cout << i << " " << i - box << endl;
						break;
					}
				}
			}
		}
		cin >> N >> M;
	}
	return 0;
}