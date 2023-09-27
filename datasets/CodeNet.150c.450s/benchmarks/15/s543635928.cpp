#include <stdio.h>
#include <algorithm>
using namespace std;
int n, q, r, ret, a[10000];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d", &r);
		for(int j = 0; j < n; j++) {
			if(a[j] == r) {
				ret++; break;
			}
		}
	}
	printf("%d\n", ret);
	return 0;
}