#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#define Abs(x) ((x>=0)?x:-x)


int main()
{

	//FILE* fin = freopen("input.txt", "r", stdin);
	while (1){

		int sumt = 0, sumh = 0, n, m;
		int cardt[100], cardh[100];
		scanf("%d", &n);
		scanf("%d", &m);
		if (n == 0 && m == 0){
			break;
		}
		int i = 0;
		while (i < n){
			scanf("%d", &cardt[i]);
			sumt += cardt[i];
			i++;
		}
		i = 0;
		while (i < m){
			scanf("%d", &cardh[i]);
			sumh += cardh[i];
			i++;
		}

		if ((sumt + sumh) % 2 == 1){
			printf("%d\n", -1);
			continue;
		}

		int j, temp, diff, flag = 0, csum = 300, I = 0, J = 0;
		diff = sumt - sumh;
		//printf("sumt=%d sumh=%d diff=%d\n", sumt, sumh, diff);
		for (i = 0; i < n; i++){
			for (j = 0; j < m; j++){
				if (cardt[i] - cardh[j] == (diff / 2)){
					flag = 1;
					if ((cardt[i] + cardh[j]) < csum){
						I = i;
						J = j;
						csum = cardt[i] + cardh[j];
					}
				}
			}
		}
		if (flag == 0){
			printf("%d\n", -1);
			continue;
		}
		
		sumt = sumt - cardt[I] + cardh[J];
		sumh = sumt + cardt[I] - cardh[J];
		if (sumt == sumt){
			printf("%d %d\n", cardt[I], cardh[J]);
		}
	
	}
	return 0;
}