#include <stdio.h>
int main(void){
	int x,y,num[100];
    scanf("%d\n",&x);
    for(int i = 0;i<x;i++){
		y = x-1-i;
		if(i ==(x-1)) scanf("%d",&num[y]);
	    else scanf("%d ",&num[y]);
	}
	for(int j = 0;j<x;j++){
		if(j == (x-1)) printf("%d\n",num[j]);
		else printf("%d ",num[j]);
	}
return 0;
}