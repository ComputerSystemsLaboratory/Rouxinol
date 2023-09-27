#include <stdio.h>
int main()
{
	int n, a[1000], i, j, v, gap, ans;
for(;;){
	scanf("%d", &n);
if(n==0) break;
else{
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 2; i <= n; i++) {
		j = i - 1;
		while (j >= 1 && a[j] > a[j + 1]) {
			v = a[j + 1];
			a[j + 1] = a[j];
			a[j] = v;
			j--;
		}
	}
	ans = 1000000;
	for (i = 1; i <= n - 1; i++) {
		gap = a[i + 1] - a[i];
		if (ans>gap) ans = gap;
	}

	printf("%d\n", ans);}}
	return 0;
}
