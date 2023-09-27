#include <cmath>
#include <stdio.h>
using namespace std;

bool loadable(int P, int n, int k, int w[]) {
	int num_tracks = 1, current_w = 0;

	for (int i=0; i<n; i++) {
		if (current_w + w[i] > P) {
			current_w = 0;
			num_tracks++;
		}

		if (num_tracks > k) return false;

		current_w += w[i];
	}

	return true;
}

int main() {
	int P, P_min, P_max;
	int n, k;
	int w[100000];
	
	scanf("%d %d\n", &n, &k);

	P_min = 1;
	int sum = 0;

	for (int i=0; i<n; i++) {
		scanf("%d", w + i);
		sum += w[i];
		if (P_min < w[i]) P_min = w[i];
	}

	P_max = sum - k + 1;
	
	while (P_max > P_min) {
		P = sqrt((long double)P_max * (long double)P_min);
		if (loadable(P, n, k, w)) {
			P_max = P;
		} else {
			P_min = P + 1; // P doesn't satisfy the condition, so P_min with satisfaction >= (P + 1)
		}
	}
	
	printf("%d\n", P_max);
}