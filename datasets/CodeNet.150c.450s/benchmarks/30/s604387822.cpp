#include <stdio.h>
#include <algorithm>
using namespace std;
int n, c, a[100];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++) {
		int k = i;
		for(int j = i + 1; j < n; j++) {
			if(a[k] > a[j]) k = j;
		}
		if(k != i) swap(a[k], a[i]), c++;
	}
	for(int i = 0; i < n; i++) {
		if(i) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
	printf("%d\n", c);
	return 0;
}