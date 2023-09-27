#include <stdio.h>
#include <algorithm>
using namespace std;
int n, a, m = 1999999999, r = -1999999999;
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		r = max(r, a - m);
		m = min(m, a);
	}
	printf("%d\n", r);
}