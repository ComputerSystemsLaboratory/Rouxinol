#include<stdio.h>
int main(){
	int i,n,j,k,o;
	int a[101];
	scanf("%d",&o);
	for(i=0;i<o;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<o;j++){
		if(j!=o-1)
		printf("%d ",a[j]);
	}
	printf("%d\n",a[j-1]);
	for(i=1;i<o;i++){
		for(j=0;j<i;j++){
			if(a[i]<=a[j]){
				int temp=a[i];
				for(k=i;k>j;k--){
					a[k]=a[k-1];
				}
				a[j]=temp;
				break;
			}
		}
		for(j=0;j<o;j++){
			if(j!=o-1)
			printf("%d ",a[j]);
		}
		printf("%d\n",a[j-1]);
	}
} 
