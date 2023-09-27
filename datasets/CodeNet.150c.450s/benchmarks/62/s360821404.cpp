#include <stdio.h>
int main(void)
{	
	int a[3],b,c,m;
	
	for(b=0;b<3;b++)scanf("%d",&a[b]);
	for(b=0;b<3;b++){
	for(c=b+1;c<3;c++){
	if(a[b]>a[c]){
		m=a[b];
		a[b]=a[c];
		a[c]=m;
	}
	}
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
	return 0;
	}
