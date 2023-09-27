#include<stdio.h>

int main(void){
	int data[5],work;
	int i,j;

	scanf("%d %d %d %d %d",&data[0],&data[1],&data[2],&data[3],&data[4]);

	for(i=0;i<=3;i++){
		for(j=i+1;j<=4;j++){
			if(data[i]<data[j]){
				work=data[i];
				data[i]=data[j];
				data[j]=work;
			}
		}
	}
	printf("%d %d %d %d %d\n",data[0],data[1],data[2],data[3],data[4]);

	return 0;
}