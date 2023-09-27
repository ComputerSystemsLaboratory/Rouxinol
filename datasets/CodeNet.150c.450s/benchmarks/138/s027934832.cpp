#include<cstdio>

int a, b;

int GCD(int n1, int n2){
	if(n2 == 0) return n1;
	return GCD(n2, n1 % n2);
}

int main(){
	scanf("%d %d", &a, &b);
	int ans = GCD(a, b);
	printf("%d\n", ans);
	return 0;
}