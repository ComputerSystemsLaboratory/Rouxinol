#include <stdio.h>
#include <algorithm>
using namespace std;
int n, q, r, ret, a[10000];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a + n);
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d", &r);
		if(upper_bound(a, a + n, r) - lower_bound(a, a + n, r)) ret++;
	}
	printf("%d\n", ret);
	return 0;
}