#include <cstdio>

bool isPrime(int n);

int main(){
	int n, m, count = 0; scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		if(isPrime(m)) count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}

bool isPrime(int n){
	if(n <= 1) return false;
	bool judge = true;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			judge = false;
			break;
		}
	}
	return judge;
}