#include<cstdio>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;
int n, k[99999999];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { scanf("%d", &k[i]); }
	sort(k, k + n);
	for (int i = 0; i < n; i++) {if (i) { printf(" "); }printf("%d", k[i]); }
	printf("\n");
	return 0;
}