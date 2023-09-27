#include <stdio.h>
#include <algorithm>
using namespace std;
int n, a[100];
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	for(int i = 0; i < n; i++) {
		for(int j = i - 1; j >= 0; j--) {
			if(a[j] < a[j + 1]) break;
			swap(a[j], a[j + 1]);
		}
		for(int i = 0; i < n; i++) {
			if(i) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}