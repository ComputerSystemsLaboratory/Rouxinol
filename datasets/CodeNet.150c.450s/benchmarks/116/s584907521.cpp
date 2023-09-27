#include <cstdio>

using namespace std;

int main()
{
	int n, k;
	while (scanf("%d %d", &n, &k), n || k) {
		int N[100001];

		for (int i = 1; i <= n; ++i) scanf("%d", &N[i]);

		int sum = 0;

		for (int i = 1; i <= k; ++i) sum += N[i];

		int a = sum;

		for (int i = k; i < n; ++i) {
			a += N[i+1] - N[i-k+1];
			sum = sum > a ? sum : a;
		}

		printf("%d\n", sum);
	}
}