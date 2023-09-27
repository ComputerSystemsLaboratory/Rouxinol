#include<stdio.h>
int main(){
    int x;
	scanf("%d",&x);
	for(int a=1;a<=x;a++){
		if(a%3==0){
			printf(" %d",a);
		}
		else{
			int b=a;
			while(b>0){
				if(b%10==3){
					printf(" %d",a);
					break;
				}
				b=b/10;
			}
		}
	}
	printf("\n");

	return 0;
}