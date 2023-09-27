#include<stdio.h>

int main(){
	int kane,a,b;
	while(0<=scanf("%d",&kane)){
		if(kane==0) break;
		a=0;
		kane=1000-kane;
		while(kane>=500){
			kane-=500;
			++a;
		}
		while(kane>=100){
			kane-=100;
			++a;
		}
		while(kane>=50){
			kane-=50;
			++a;
		}
		while(kane>=10){
			kane-=10;
			++a;
		}
		while(kane>=5){
			kane-=5;
			++a;
		}
		while(kane>=1){
			kane-=1;
			++a;
		}
		printf("%d\n",a);
	}
	return 0;
}