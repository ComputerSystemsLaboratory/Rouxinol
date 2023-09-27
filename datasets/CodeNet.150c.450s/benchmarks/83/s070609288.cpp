#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 101
#define SACK_SIZE 10001
int S, N;
int w[SIZE], v[SIZE], dp[SIZE][SACK_SIZE];
//int opt_val;
int mmax(int a, int b){
	if (a > b) return a;
	else return b;
}void init(){
	int i, j;
	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SACK_SIZE; j++){
			dp[i][j] = -1;
		}
	}
}
int solve(int index, int cap){

	if (dp[index][cap] >= 0){
		return dp[index][cap];
	}
	if (index == N){
		return 0;
	}
	int left, right;

	left = solve(index + 1, cap);

	if (cap - w[index] >= 0){
		right = solve(index + 1, cap - w[index]) + v[index];
	}
	else
	{
		right = 0;
	}

	dp[index][cap] = mmax(left, right);
	return dp[index][cap];
}
int main(void){

	while (scanf("%d %d", &N, &S) != EOF){
		for (int i = 0; i < N; i++){
			scanf("%d %d", &v[i], &w[i]);
		}
		init();
		int value = solve(0, S);
		printf("%d\n", value);
	}
	return 0;
}