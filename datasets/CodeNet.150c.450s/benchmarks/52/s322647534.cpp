#include<stdio.h>

int main(){
	int car[11],i=0,n;
	while(1){
		if(scanf("%d",&n)==EOF)break;
		if(n){
			car[i]=n;
			i++;
		}else{
			i--;
			printf("%d\n",car[i]);
			
		}
	}
}