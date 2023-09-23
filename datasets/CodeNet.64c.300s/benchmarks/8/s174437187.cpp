#include <stdio.h>
int main(){
	int i = 1;
	int x,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x = i;
		if(x%3 == 0){
			printf(" %d",i);
		}else{
			while(x != 0){
				if(x % 10 == 3){
					printf(" %d",i);
					break;
				}else{
					x = x/10;
				}
			}
		}
	}
	printf("\n");
}