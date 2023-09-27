#include <stdio.h>

int main(){
	int i,x;
	for(i=1;i<=1000000;i++){
		scanf("%d",&x);
		if(x==0){
			break;
		}

		printf("Case %d: %d\n",i,x);
	}
	return 0;
}