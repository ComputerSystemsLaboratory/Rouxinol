#include <stdio.h>

int main(void){
	int n[10],i,j,w;
	
	for(i=0;i<=9;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(n[i]<n[j]){
				w=n[i];
				n[i]=n[j];
				n[j]=w;
			}
		}
	}
	for(i=0;i<=2;i++){
		printf("%d\n",n[i]);
	}
	return 0;
}