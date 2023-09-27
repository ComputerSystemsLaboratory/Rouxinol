#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k,l,a[10]={0};
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(k=9;k>6;k--){
		for(i=0;i<k;i++){
			if(a[i]>a[i+1]){
				j=a[i];
				a[i]=a[i+1];
				a[i+1]=j;
			}
		}
	}
	printf("%d\n%d\n%d\n",a[9],a[8],a[7]);
	return 0;
}