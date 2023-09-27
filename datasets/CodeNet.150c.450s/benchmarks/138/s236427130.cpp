#include <stdio.h>
int gcd(int a,int b){
	if(a%b!=0){
		return gcd(b,a%b);
	}else{ 
		return b;
	}
}
int main(void){
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",gcd(x,y));
}