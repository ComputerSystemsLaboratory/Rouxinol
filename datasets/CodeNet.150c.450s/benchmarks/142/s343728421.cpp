#include <stdio.h>
#include <math.h>
using namespace std;
constexpr int kN = int(2E5 + 10);
int a[kN];
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int i = k + 1; i <= n; i++) if (a[i] > a[i - k]) printf("Yes\n");
	else printf("No\n");
}
