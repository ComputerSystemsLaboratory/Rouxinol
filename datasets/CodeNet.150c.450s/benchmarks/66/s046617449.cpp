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
	string s[1000] = {};
	for (int i = 0; i < N; i++)cin >> s[i];
	cin >> M;
	string t;
	bool door = true;
	for (int i = 0; i < M; i++) {
		cin >> t;
		bool f = false;
		for (int j = 0; j < N; j++) {
			if (t == s[j])f = true;
		}
		if (f) {
			if (door) {
				cout << "Opened by " << t << endl;
			}
			else {
				cout << "Closed by " << t << endl;
			}
			door ^= true;
		}
		else {
			cout << "Unknown " << t << endl;
		}
	}
	return 0;
}