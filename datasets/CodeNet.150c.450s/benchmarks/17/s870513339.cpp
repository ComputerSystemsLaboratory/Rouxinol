#include<stdio.h>
int main(void)
{
	int i,j,temp;
	int data[5];
	for(i=0;i<5;i++){
		scanf("%d",&data[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(data[i]<data[j]){
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++){
		printf("%d ",data[i]);
	}
	printf("%d\n",data[5-1]);
	return 0;
}