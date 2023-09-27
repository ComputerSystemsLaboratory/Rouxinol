#include <iostream>
#include <algorithm>
using namespace std;
int n, x, a[100009];
int main() {
	scanf("%d", &n);
	fill(a, a + n, 1 << 30);
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		*lower_bound(a, a + n, x) = x;
	}
	printf("%d\n", lower_bound(a, a + n, 1 << 30) - a);
}