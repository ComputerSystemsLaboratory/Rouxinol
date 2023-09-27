#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int x[2][1500001];
int w[1500], h[1500], sw[1501], sh[1501];


int main() {
	//init
	while (1) {
		int n, m;
		scanf("%d%d", &n, &m);
		if (n == 0)break;
		memset(x, 0, sizeof(x));
		for (int i = 0; i < n; i++)scanf("%d", &h[i]);
		for (int i = 0; i < m; i++)scanf("%d", &w[i]);
		for (int i = 0; i < n; i++)sh[i + 1] = sh[i] + h[i];
		for (int i = 0; i < m; i++)sw[i + 1] = sw[i] + w[i];
		for (int i = 0; i < n+1; i++)for (int j = i + 1; j < n+1; j++)x[0][sh[j] - sh[i]]++;
		for (int i = 0; i < m+1; i++)for (int j = i + 1; j < m+1; j++)x[1][sw[j] - sw[i]]++;
		long long int ret = 0;
		for (int i = 1; i < 1500001; i++)ret += x[0][i] * x[1][i];
		printf("%lld\n", ret);
	}
	return 0;
}