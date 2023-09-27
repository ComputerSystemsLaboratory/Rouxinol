#include<stdio.h>

int ans;

void func(int n, int index, int count){
	if(n < 0)return;
//	printf("%d %d %d\n", n, index, count);
	if(count == 0 && n == 0){
		ans++;
		return;
	}
	if(index==0)return;
	
	for(int i = index-1; i >= 0; i--){
		func(n-i, i, count-1);
	}
}
	

int main(void){
	
	int n,s;
	
	while(scanf("%d %d", &n, &s)){
		if(n == 0 && n==s)break;
		ans = 0;
		
		func(s, 10, n);
		printf("%d\n", ans);
	}
	return 0;
}