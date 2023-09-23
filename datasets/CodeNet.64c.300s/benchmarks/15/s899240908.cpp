#include<stdio.h>
void swap(int *a,int *b,int *c){
	int temp=*a;
	*a=*b;
	*b=temp;
	(*c)++;
}

int main(){
	int i,n,j,k,count=0,flag;
	int a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		int min=a[i];
		for(j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];
				flag=j;
				
			}
		}
		if(min<a[i])
		swap(&a[i],&a[flag],&count);
	}
	
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[i]);
	printf("%d\n",count);
} 
