#include <stdio.h>
#define LENGTH 3

int main(void)
{
	int a[LENGTH];
	int i,j,tmp;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	for(j=0;j<LENGTH-1;j++){
		for(i=0;i<LENGTH-1;i++){
			if(a[i]>a[i+1]){
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
			}
				
		}
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
	return 0;
}