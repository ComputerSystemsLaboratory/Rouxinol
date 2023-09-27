#include <iostream>
#include <vector>

#define N_MAX 100000
#define W_MAX 10000

typedef long long ll;

int ws[N_MAX];
int n;
int k;

bool check(const ll P) {
	ll sum = 0;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		sum += ws[i];
		while (sum > P) {
			sum = ws[i];
			++count;
			if (count == k) {
				return false;
			}
		}
	}
	return true;
}

ll solve() {
	ll begin = 0;
	ll end = N_MAX * W_MAX;

	while (begin < end) {
		ll mid = (begin + end) / 2;
		if (check(mid)) {
			end = mid;
		} else {
			begin = mid + 1;
		}
	}
	return begin;
}

int main() {
	std::cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		std::cin >> ws[i];
	}
	std::cout << solve() << std::endl;

	return 0;
}