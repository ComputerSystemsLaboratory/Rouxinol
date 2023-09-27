#include <stdio.h>

int gcd(int a, int b)
{
	if(b == 0){
		return a;
	} else {
		return gcd(b, a%b);
	}
}

int lcm(int a, int b){
	if ((a==0)||(b==0)){
		return 0;
	}
	return ((a / gcd(a, b)) * b);
}

int main(void){
	int a,b,x,y;
	while(scanf("%d %d",&a,&b)!=EOF){
		x=gcd(a,b);
		y=lcm(a,b);
		printf("%d %d\n",x,y);
	}
}