#include <stdio.h>

int main(){
	int i,x,y;
	for(i=0;i<=1000000;i++){
		scanf("%d %d",&x,&y);
		if((x==0)&&(y==0)){
			break;
		}
		if(x==y){
			printf("%d %d\n",x,y );
		}
		else if(x<y){
			printf("%d %d\n",x,y );
		}
		else if(y<x){
			printf("%d %d\n",y,x );
		}
		}
	return 0;
}