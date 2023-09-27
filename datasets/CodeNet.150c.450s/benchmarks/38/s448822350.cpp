#include <stdio.h>

int main(void)
{
	int h[3][1000], n, i, temp;
	scanf("%d", &i);
	for (n = 0; n < i; n++){
		scanf("%d %d %d", &h[0][n], &h[1][n], &h[2][n]);
		if (h[0][n]<=h[1][n]){
			temp=h[0][n];
			h[0][n]=h[1][n];
			h[1][n]=temp;
		}
		if(h[0][n]<=h[2][n]){
			temp=h[0][n];
			h[0][n]=h[2][n];
			h[2][n]=temp;
		}
/*	}
	for (n = 0; n < i; n++){
*/		if ((h[0][n]*h[0][n])==(h[1][n]*h[1][n]+h[2][n]*h[2][n])){
			printf("YES\n");
		} else printf("NO\n");
	}
	return 0;
}