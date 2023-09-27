#include<stdio.h>

int main(){
	int mount[10]={0},i,j,high;
	
	
	for(i=0;i<10;i++){
	scanf("%d",&mount[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(mount[i]<mount[j]){
				high=mount[i];
				mount[i]=mount[j];
				mount[j]=high;
			}
		}
	}
	
	for(i=0;i<3;i++){
		printf("%d\n",mount[i]);
	}
	
	return 0;
	
}