#include<cstdio>

int N, element;

bool isPrime(int num){
	if(num <= 0) return false;
	if(num == 1) return false;
	if(num == 2) return true;
	if(num % 2 == 0) return false;
	for(int i = 2; i * i <= num; i++){
		if(num % i == 0) return false;
	}
	return true;
}

int main(void){
	scanf("%d", &N);
	int ans = 0;
	for(int i = 1; i <= N; i++){
		scanf("%d", &element);
		if(isPrime(element) == true){
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}