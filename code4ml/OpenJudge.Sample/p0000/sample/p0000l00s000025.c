#include <stdio.h>

int main(void)
{
	int a[10],i,j,work;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				work=a[i];
				a[i]=a[j];
				a[j]=work;
			}
		}
	}
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	return 0;
}