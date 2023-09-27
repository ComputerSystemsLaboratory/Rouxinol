#include <iostream>
#include <cmath>

using namespace std;

const int MAX_N = 1000000;
bool prime[MAX_N];

void eratos() {
    for (int i = 0; i < MAX_N; ++i) prime[i] = true;
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i < sqrt(MAX_N); ++i) {
		if (prime[i]) {
			for (int j = 0; i * (j + 2) < MAX_N; ++j) {
				prime[i * (j + 2)] = false;
			}
		}
	}
}

int main() {
	eratos();
	int n;
	while (cin >> n) {
		int ans = 0;
		for (int i = 2; i <= n; ++i) {
			if (prime[i]) ans++;
		}
		cout << ans << endl;
	}
}