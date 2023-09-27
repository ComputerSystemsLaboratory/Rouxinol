#include<stdio.h>
int main(void){
	int a,b,c;
	int x=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a<1||b<1||c>10000){
		printf("error\n");
		return 0;
	}else {
		for(int i=a;i<=b;i++){
			if(c%i==0) x++;
		}
		printf("%d\n",x);
		return 0;
	}
}