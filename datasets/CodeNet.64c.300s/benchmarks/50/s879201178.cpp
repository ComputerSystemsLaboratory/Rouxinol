#include<stdio.h>
void trade(int *a,int *b);

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int flag=1;
	int count=0;
	int j;
	while(flag){
		flag=0;
		for(j=n-1;j>=1;j--){
			if(a[j]<a[j-1]){
				trade(&a[j],&a[j-1]);
				flag=1;
				count++;
			}
		}
	}
	int k=0;
	while(1){
		printf("%d",a[k]);
		k++;
		if(k==n){
			printf("\n%d\n",count);
			break;
		}
		printf(" ");
	}
}


void trade(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}