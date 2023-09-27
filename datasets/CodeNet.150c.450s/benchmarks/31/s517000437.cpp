#include<stdio.h>
int max ( int a, int b) {
	if ( a > b) return a;
	return b;
}
int min ( int a, int b) {
	if ( a < b) return a;
	return b;
}
int main() {
	int n, R[200000+10];
	scanf("%d",&n);
	for ( int i = 1; i <= n; i++) {
		scanf("%d", &R[i]);
	}
	int maxv = -2000000000;
	int minv = R[1];
	for ( int i = 2 ; i <= n; i++) {
		maxv = max(maxv, R[i] - minv);
		minv = min(minv, R[i]);
		
	}
	printf("%d\n", maxv);
}
