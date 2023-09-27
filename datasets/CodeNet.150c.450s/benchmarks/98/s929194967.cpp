#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 200

int n, m, s[MAX];

int main() {
	while (1) {
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0)
			return 0;

		for (int i = 0; i < n + m; i++)
			scanf("%d", s + i);

		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += s[i];
		for (int i = 0; i < m; i++)
			sum -= s[i + n];

		int taro = -1, hanako = -1;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (sum == (s[i] - s[j + n]) * 2)
					if (taro < 0 || s[i] + s[j + n] < taro + hanako) {
						taro = s[i];
						hanako = s[j + n];
					}

		printf(taro < 0 ? "-1\n" : "%d %d\n", taro, hanako);
	}
}