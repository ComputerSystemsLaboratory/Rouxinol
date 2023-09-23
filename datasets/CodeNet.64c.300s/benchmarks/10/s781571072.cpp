#include<cstdio>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	while(a || b){
		if(a > b){
			printf("%d %d\n", b, a);
		}else{
			printf("%d %d\n", a, b);
		}
		scanf("%d %d", &a, &b);
	}
	return 0;
}