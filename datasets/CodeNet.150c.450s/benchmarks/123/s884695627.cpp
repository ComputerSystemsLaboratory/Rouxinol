#include <stdio.h>
#include <stdbool.h>

bool prime(int x)
{
	if(x <= 1){
		return false;
	}
	if(x == 2){
		return true;
	}
	
	int i = 2;
	while(i * i <= x){
		if(x % i == 0){
			return false;
		}
		i++;
	}
	return true;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int ans = 0;
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(prime(x)){
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}