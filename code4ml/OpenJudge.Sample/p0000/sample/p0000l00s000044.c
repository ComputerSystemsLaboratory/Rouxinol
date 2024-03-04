#include<stdio.h>

main(void)
{
	int a[10],b,c,d;
	
	for(b=0;b<10;b++){
		scanf("%d",&a[b]);
	}
	for(b=0;b<10;b++){
		for(d=9;d>0;d--){
			if(a[d-1]>a[d]){
				c=a[d];
				a[d]=a[d-1];
				a[d-1]=c;
			}
		}
	}
	
	printf("%d\n%d\n%d\n",a[9],a[8],a[7]);
	
	return 0;
}