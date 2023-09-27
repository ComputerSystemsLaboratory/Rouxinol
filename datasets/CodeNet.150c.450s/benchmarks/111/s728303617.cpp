#include<stdio.h>
int main(){
	int N;
	int d[100] = { 0 };
	long long count[100][21];
	int i, j;
	for (i = 0; i < 100; i++){
		for (j = 0; j < 21; j++){
			count[i][j] = 0;
		}
	}
	scanf("%d", &N);
	for (i = 0; i < N; i++){
		scanf("%d", &d[i]);
	}
	count[0][d[0]] = 1;
	for (i = 1; i < N-1; i++){
		for (j = 0; j < 21; j++){
			if (count[i - 1][j] != 0){
				if (j + d[i] <= 20){//20??\????????´???
					count[i][j + d[i]] += count[i - 1][j];//????????´???
				}
				if (j - d[i]>= 0){//0??\????????´???
					count[i][j - d[i]] += count[i - 1][j];//?¶??????´???
				}
			}
		}
	}
	printf("%lld\n", count[N - 2][d[N - 1]]);//???????????????
	return 0;
}