#include<stdio.h>
int main(void) {
	int n, s[100] = {0}, max, min,sum,count;
	while(1){
		sum = 0;
		count = 0;
		scanf("%d", &n);
		if (n== 0) break;
		for (int i = n; i > 0; i--) {
			scanf("%d", &s[i]);
			if (i == n) {
				max = s[i];
				min = s[i];
			}
			if (max < s[i]) max = s[i];
			if (min > s[i]) min = s[i];
			count++;
			sum += s[i];
		}
		sum = sum - (max + min);
		printf("%d\n", sum / (count - 2));
	}
	return 0;
}