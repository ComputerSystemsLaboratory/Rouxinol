#include <cstdio>
#include <iostream>
using namespace std;

int remain(int w[], int n, int k, int p) {
	int i, j = 0;
	int sum = 0;
	for (i = 0; i < n; ++i) {
		if (sum + w[i] <= p) {
			sum += w[i];
		} else {
			j++;
			if (j >= k || w[i] > p) {
				break;
			}
			sum = w[i];
		}
	}
	return (n - i);
}

int main()
{
	int w[100000];
	int n, k;
	scanf("%d %d", &n, &k);
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &w[i]);
		sum += w[i];
	}

	int l = 0, r = sum, mid;
	while (l != r) {
		mid = (l + r) / 2;
		if (remain(w, n, k, mid) > 0) {
			l = mid + 1;
		} else {
			r = mid;
		}
	}
	cout << l << endl;
}