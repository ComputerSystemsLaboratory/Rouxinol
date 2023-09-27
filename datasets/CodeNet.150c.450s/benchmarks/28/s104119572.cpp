#include <cstdio>
#include <iostream>

using namespace std;

int MAX_WEIGHT = 1000000000;

int W[100000];

int n, k;

bool check(int p) {

	int kCnt = 1;
	int w = p;
	for (int i = 0; i < n; ++i) {
		if (W[i] > p) {
			return false;
		}
		w -= W[i];
		if (w < 0) {
			++kCnt;
			if (kCnt > k) {
				return false;
			}
			w = p - W[i];
		}
	}
	return true;
}

int main() {

	scanf("%d", &n);
	scanf("%d", &k);

	for (int i = 0; i < n; ++i) {
		scanf("%d", &W[i]);
	}

	int left = 0;
	int right = MAX_WEIGHT;
	int mid = (left + right) / 2;
	while (left < mid && mid < right) {
		if (check(mid)) {
			right = mid;
		} else {
			left = mid;
		}
		mid = (left + right) / 2;
//		cout << "left:" << left << ":mid:" << mid << ":right:" << right << endl;
	}

	cout << right << endl;

	return 0;
}