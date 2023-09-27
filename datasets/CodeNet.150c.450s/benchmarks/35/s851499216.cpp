#include<cstdio>

int main(){
	int n,max,sum,t;
	scanf("%d", &n);
	while(n){
		scanf("%d", &t);
		max = sum = t;
		if(sum < 0){
			sum = 0;
		}
		for(int i = 1; i < n; i++){
			scanf("%d", &t);
			sum += t;
			if(sum > max){
				max = sum;
			}
			if(sum < 0){
				sum = 0;
			}
		}
		printf("%d\n", max);
		scanf("%d", &n);
	}
	return 0;
}