#include <cstdio>
#define MAX 200000
#define MIN -999999999

int maximumProfit(int* profit, int n);

int main(){
	int n; scanf("%d", &n);
	
	int profit[MAX];
	for(int i = 0; i < n; i++) scanf("%d", &profit[i]);
	
	int max = maximumProfit(profit, n);
	
	printf("%d\n", max);
	
	return 0;
}

int maximumProfit(int* profit, int n){
	int max = MIN, min = profit[0];
	for(int i = 1; i < n; i++){
		max = max > profit[i] - min ? max : profit[i] - min;
		min = min < profit[i] ? min : profit[i];
	}
	return max;
}