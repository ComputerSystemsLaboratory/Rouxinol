#include <stdio.h>

int main(void){
	
	int n[10000],i;
	
	i=0;
	n[i]=1;
	for(;n[i]!=0;){
		i++;
		scanf("%d",&n[i]);
	}
	
	for(i=1;n[i]!=0;i++){
		printf("Case %d: %d\n",i,n[i]);
	}
	return 0;
}