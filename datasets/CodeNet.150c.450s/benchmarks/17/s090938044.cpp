#include<stdio.h>

void swap(int *a,int *b){
	int temp;
	temp=*a; *a=*b; *b=temp;
}

int main(void){
	int a[5];
	int i,j;

	scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
	
	j=4;
	while(j-->0){
		for(i=4; i>0;i--)
		if(a[i-1]<a[i]) swap(&a[i-1],&a[i]);
			};

	printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);

	return (0);
}