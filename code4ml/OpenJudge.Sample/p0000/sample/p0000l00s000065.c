#include <stdio.h>

int main(){
	int i,j,a;
	int data[10];
	for(i=0; i<10; i++)
		scanf("%d",&data[i]);
	for(i=0; i<10; i++){
		for(j=1; j<10-i; j++){
			if(data[i]<data[i+j]){
				a=data[i];
				data[i]=data[i+j];
				data[i+j]=a;
			}
		}
	}
	for(i=0; i<3; i++){
		printf("%d\n",data[i]);
	}
	return 0;
}