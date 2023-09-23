#include<stdio.h>
int main(){
	int q,w;
	scanf("%d %d",&q,&w);
	if(q>w){
		printf("a > b\n");
	}else if(q<w){
		printf("a < b\n");
	}else{
		printf("a == b\n");
	}
	return 0;
}
