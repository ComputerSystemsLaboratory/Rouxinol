#include<stdio.h>
void swap(int *a,int *b,int *c){
	int temp=*a;
	*a=*b;
	*b=temp;
	(*c)++;
}

int main(){
	int i,n,j,k,count=0;
	int a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1])	{
				swap(&a[j],&a[j-1],&count);
			}
		}
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[i]);
	printf("%d\n",count);
} 
