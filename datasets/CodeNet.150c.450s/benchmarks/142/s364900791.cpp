#include <stdio.h>
#include <math.h>
using namespace std;
constexpr int kN = int(2E5 + 10);
int a[kN];
long double s[kN], v[kN];
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) s[i] = s[i - 1] + log10l(a[i]);
	for (int i = k; i <= n; i++) v[i] = s[i] - s[i - k];
	for (int i = k + 1; i <= n; i++) if (v[i] > v[i - 1]) printf("Yes\n");
	else printf("No\n");
}
