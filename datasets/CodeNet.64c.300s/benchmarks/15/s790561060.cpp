#include<stdio.h>
void swap(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main(void){
	int N,i,a[101],j,k=0,min;
	scanf("%d",&N);
	for(i=0;i<N-1;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d",&a[N-1]);
	for(i=0;i<N;i++){
		min=i;
		for(j=i;j<N;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(i!=min){
			swap(&a[i],&a[min]);
			k++;
		}
	}
	for(i=0;i<N-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[N-1]);
	printf("%d\n",k);
}