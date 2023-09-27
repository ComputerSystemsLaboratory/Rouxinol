#include<cstdio>

int main(){
	int d;
	int sum;
	while(scanf("%d", &d) + 1){
		sum = 0;
		for(int i = 1; i < 600 / d; i++){
			sum += i * d * i * d * d;
		}
		printf("%d\n", sum);
	}
	return 0;
}