#include<stdio.h>
int main(void)
{
	int a[3];
	int i,j,temp;
	
	for (i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<2;i++){
		for (j=i+1;j<3;j++){
				if (a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
	}
	for(i=0;i<2;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[2]);
	return 0;
}