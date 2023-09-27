#include<stdio.h>
int main(){
	int n,i,a[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--){
		if(i==1){
			printf("%d\n",a[i]);
		}
		else{
			printf("%d ",a[i]);
		}	
	}
	return 0;
}