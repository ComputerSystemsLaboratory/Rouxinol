#include<stdio.h>

int main()
{
	int a[10],i,j,c,v,b;
	j=v=b=c=0;
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
	}
    for(i=0;i<10;i++){
		if(a[i]>j)
			j=a[i];
	}
		for(i=0;i<10;i++){
		if((a[i]!=j)&&(a[i]>v))
			v=a[i];
		}
		for(i=0;i<10;i++){
		if((a[i]!=j)&&(a[i]!=v)&&(a[i]>b))
			b=a[i];
		}
		printf("%d\n%d\n%d\n",j,v,b);
	return 0;
}