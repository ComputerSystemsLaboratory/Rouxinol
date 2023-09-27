#include<stdio.h>
int main(void)
{
    int i,j,data[4],temp;
	for(i=1;i<=3;i++){
	scanf("%d",&data[i]);
	}
	for(i=1;i<3;i++){
		for(j=i+1;j<=3;j++){
            if(data[i]>data[j]){
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}	
	}
	
	printf("%d %d %d\n",data[1],data[2],data[3]);
	return 0;
}	
	