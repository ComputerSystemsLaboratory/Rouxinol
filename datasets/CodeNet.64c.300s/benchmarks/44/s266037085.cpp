#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>

const int kMaxTown = 10;
const int kInf = 1 << 16;

int cost[kMaxTown][kMaxTown];

int main(){

	while (1){
		int n;
		scanf(" %d", &n);
		if (n == 0) break;

		for (int i = 0; i < kMaxTown; i++)
			for (int j = 0; j < kMaxTown; j++)
				cost[i][j] = (i == j) ? 0 : kInf;

		for (int i = 0; i < n; i++){
			int a, b, c;
			scanf(" %d %d %d", &a, &b, &c);
			cost[a][b] = cost[b][a] = c;
		}

		for (int k = 0; k < kMaxTown; k++)
			for (int i = 0; i < kMaxTown; i++)
				for (int j = 0; j < kMaxTown; j++)
					cost[i][j] = std::min(cost[i][j], cost[i][k] + cost[k][j]);

		int best = 0;
		int bestSum = kInf;
		for (int i = 0; i < kMaxTown; i++){
			int sum = 0;
			for (int j = 0; j < kMaxTown; j++)
				if (cost[i][j] != kInf)
					sum += cost[i][j];
			if (sum == 0) continue;
			if (sum < bestSum){
				bestSum = sum;
				best = i;
			}
		}

		printf("%d %d\n", best, bestSum);
	}
	return 0;
}