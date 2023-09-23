#include <stdio.h>

int count(int n, int s, int i, int sum){
	if(n == 0 && sum == s){
		return 1;
	}else if(i > 9){
		return 0;
	}
	return count(n-1, s, i+1, sum+i) + count(n, s, i+1, sum);
}

int main(void){
	int n, s;
	bool use[10];
	while(true){
		scanf("%d %d", &n, &s);
		if(n==0 && s==0){ break; }
		printf("%d\n", count(n, s, 0, 0));
	}
	return 0;
}