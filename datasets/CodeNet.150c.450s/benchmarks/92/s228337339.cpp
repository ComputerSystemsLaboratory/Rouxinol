#include <stdio.h>

int main(){
	
	int x ,y;
	while(	scanf("%d %d",&x,&y) != EOF){
		int z  = x+y;
		int digCnt = 1;
		while(z/10!=0){
			z/=10;
			digCnt++;
		}
		printf("%d\n",digCnt);
	}
	
	return 0;
}