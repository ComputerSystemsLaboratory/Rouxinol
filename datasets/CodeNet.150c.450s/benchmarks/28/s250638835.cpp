#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
long long baggage[MAX];
int n, k;

bool vertification(long long P){
	int j = 0;
	long long track=0;
	for (int i = 0; i < n; i++){
		if (track + baggage[i] <= P){
			track += baggage[i];
			if (i == n - 1){
				return true;
			}
		}else{
			if (j < k-1){
				j++;
				track = 0;
                                i--;
			}
			else{
				return false;
			}
		}
	}
}

long long check(){
	long long left = 0;
	long long right = MAX*10000;
	long long mid;
	while (right-left>1){
		mid = (left + right) / 2;
		if (vertification(mid)){
			right = mid;
		}
		else{
			left = mid;
		}
	}
	return right;
}

int main(){
	long long result;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d", &baggage[i]);
	}
	result = check();
	printf("%d\n", result);
	return 0;
}