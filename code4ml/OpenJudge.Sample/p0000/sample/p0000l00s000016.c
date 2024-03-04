#include<stdio.h>
int main(void){
int i,j,a[10],t;

for(i=0;i<10;i++){
	
	scanf("%d",&a[i]);
}
  
  	for(i=0;i<10;i++)
	{
		for(j=0;j<10-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%5d",a[i]);
	}
	

	
	
	
	return 0;
}