#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>=b){
		printf("No\n");
	}
	else if (b>=c){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	return 0;
}