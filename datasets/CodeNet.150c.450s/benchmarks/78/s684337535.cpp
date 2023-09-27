#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 1000000

int N, pol[MAX], odd[MAX];

int main() {
	for (int i = 0; i < MAX; i++) {
		pol[i] = MAX;
		odd[i] = MAX;
	}

	pol[0] = odd[0] = 0;

	for (int i = 0; i < MAX; i++)
		for (int j = 1; j < MAX; j++) {
			int k = j * (j + 1) * (j + 2) / 6;
			if (i + k >= MAX)
				break;
			pol[i + k] = min(pol[i + k], pol[i] + 1);
			if ((k & 1) == 1)
				odd[i + k] = min(odd[i + k], odd[i] + 1);
		}

	while (1) {
		scanf("%d", &N);
		if (N == 0)
			return 0;
		printf("%d %d\n", pol[N], odd[N]);
	}
}