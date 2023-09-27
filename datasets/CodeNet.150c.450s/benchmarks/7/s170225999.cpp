#include<stdio.h>
int main(void)
{
	int a[10],i,j,tmp;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	printf("%d\n%d\n%d\n",a[0],a[1],a[2]);
	return 0;
}
			
	
	