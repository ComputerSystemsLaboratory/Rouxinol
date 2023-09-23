#include <stdio.h>

int main(void)
{ 
	int a[3];
	int i,j,m;
	for(i=0;i<3;i++) scanf("%d",&a[i]);
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
	return 0;
}
