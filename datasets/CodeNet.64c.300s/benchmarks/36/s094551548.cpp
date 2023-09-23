#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int i,n,c,a[3],j;
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	for(i=0;i<2;i++){
		for(j=2;j>i;j--){
			if(a[j]<a[j-1]){
				swap(&a[j],&a[j-1]);
			}
		}
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
} 
