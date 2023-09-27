#include <iostream>
#include <vector>

#define N_MAX 100000
#define W_MAX 10000

int ws[N_MAX];
int n;
int k;

int check(const int P) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		sum += ws[i];
		while (sum > P) {
			sum = ws[i];
			++count;
			if (count == k) {
				return i;
			}
		}
	}
	return n;
}

int solve() {
	int begin = 0;
	int end = N_MAX * W_MAX;

	while (begin < end) {
		int mid = (begin + end) / 2;
		if (check(mid) < n) {
			begin = mid + 1;
		} else {
			end = mid;
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