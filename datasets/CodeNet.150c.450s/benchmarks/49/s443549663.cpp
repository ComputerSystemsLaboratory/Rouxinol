#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int n, s[1000],i,max=0,min=1000,sum=0;

	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}

		sum = 0;
		max = 0;
		min = 1000;

		for (i = 0; i < n; i++){
			scanf("%d", &s[i]);
			sum += s[i];
		}

		for (i = 0; i < n; i++){
			if (max <= s[i]){
				max = s[i];
			}
		}

			for (i = 0; i < n; i++){
				if (min >= s[i]){
					min = s[i];
				}
			}

			printf("%d\n",(sum - max - min)/(n-2));
		}
	
	return 0;
}