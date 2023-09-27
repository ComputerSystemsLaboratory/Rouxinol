#include <cstdio>
#include <iostream>

using namespace std;

int n_ALDS14D, k_ALDS14D;

//5 3
//8
//1
//7
//3
//9

bool checkWeight(int W[], int p) {

	int j = 0;
	for (int i = 0; i < k_ALDS14D; ++i) {
		int w = 0;
		while (w + W[j] <= p) {
			w += W[j];
			++j;
			if (j == n_ALDS14D) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int MAX_WEIGHT = 1000000000;
	int W[100000];

	scanf("%d", &n_ALDS14D);
	scanf("%d", &k_ALDS14D);

	for (int i = 0; i < n_ALDS14D; ++i) {
		scanf("%d", &W[i]);
	}

	int P = 0;

	int left = 0;
	int right = MAX_WEIGHT;
	int mid;
	while (left < right) {
		mid = (left + right) / 2;
		if (checkWeight(W, mid)) {
			P = mid;
			right = mid;
		} else {
			left = mid + 1;
		}
	}

	cout << P << endl;

	return 0;
}