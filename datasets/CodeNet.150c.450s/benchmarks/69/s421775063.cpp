#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


const int MAX_M = 15;
int N, H[10];

double dp[2][(1 << MAX_M) + 1];

int solve() {
	int big=0, small=0;
	for (int i = 0; i < 10; i++) {
		if (big < small) swap(big, small);
		if (H[i] < small) {
			printf("NO\n");
			goto JUMP;
		}

		if (H[i] > big) big = H[i];
		else if (H[i] > small) small = H[i];

	}
	printf("YES\n");
JUMP:
	return 0;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> H[j];
		}
		solve();
	}

	
	return 0;
}