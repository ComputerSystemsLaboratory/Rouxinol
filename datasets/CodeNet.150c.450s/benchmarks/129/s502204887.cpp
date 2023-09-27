#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n_r, n_c;
	scanf("%d %d", &n_r, &n_c);

	int t[100][100];

	int r, c;
	int v;
	for(r = 0; r < n_r; r++) {
		c = 0;
		while(cin >> v) {
			t[r][c] = v;
			//printf("t[%d][%d] = %d\n", r, c, v);
			c++;
			if(c >= n_c) break;
		}
	}

	int sum;

	for(r = 0; r < n_r; r++) {
		sum = 0;
		for(c = 0; c < n_c; c++) {
			sum += t[r][c];
			printf("%d ", t[r][c]);
		}
		printf("%d\n", sum);
	}

	int total_sum = 0;
	for(c = 0; c < n_c; c++) {
		sum = 0;
		for(r = 0; r < n_r; r++) {
			sum += t[r][c];
		}
		total_sum += sum;
		printf("%d ", sum);
	}
	printf("%d\n", total_sum);
	return 0;
}