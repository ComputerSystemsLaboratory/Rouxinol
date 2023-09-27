//Vol0 0018
#include<stdio.h>
int main()
{
	int x[5],b=0;
	for(int i=0;i<5;i++){
		scanf("%d",&x[i]);
	}
	for(int i=5;i!=0;i--){
		for(int j=1;j<i;j++){
			if(x[j-1]<x[j]){
				b=x[j];
				x[j]=x[j-1];
				x[j-1]=b;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d",x[i]);
		if(i==4){
			printf("\n");
		}else{
			printf(" ");
		}
	}
	return 0;
}