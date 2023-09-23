#include<cstdio>
#include<cstring>
int main(void){
	int a=100000;
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
	a = (((a+19999) / 20000)*1000) + a;
	}
	printf("%d\n", a);
	return 0;
}