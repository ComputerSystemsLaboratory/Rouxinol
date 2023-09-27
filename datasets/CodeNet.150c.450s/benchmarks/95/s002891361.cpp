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
		string s;
		int bef = 0;
		ans = 0;
		L = 0;
		R = 0;
		for (int i = 0; i < N; i++) {
			cin >> s;
			if (s[0] == 'l')L ^= 1;
			else R ^= 1;
			if (L == R&&bef != L) {
				bef ^= 1;
				ans++;
			}
		}
		cout << ans << endl;
		cin >> N;
	}
	return 0;
}