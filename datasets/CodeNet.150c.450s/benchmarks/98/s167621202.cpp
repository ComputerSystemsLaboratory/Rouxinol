#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m)) {
		int sumn = 0, summ = 0;
		vector<int> num[2];
		if (n == 0)
			return 0;
		for (int i = 0; n > i; i++) {
			int a;
			scanf("%d", &a);
			num[0].push_back(a);
			sumn += a;
		}
		for (int i = 0; m > i; i++) {
			int a;
			scanf("%d", &a);
			num[1].push_back(a);
			summ += a;
		}
		if ((summ - sumn) % 2) {
			printf("-1\n");
			continue;
		}
		sort(num[0].begin(), num[0].end());
		
		int i;
			for (i = 0; n > i; i++) {
			for (int j = 0; m > j; j++) {
				if (num[1][j] - num[0][i] == (summ - sumn) / 2) {
					printf("%d %d\n", num[0][i], num[1][j]);
					i = n;
					break;
				}
			}
		}
			if (i != n + 1) {
				printf("-1\n");
			}

	}
}