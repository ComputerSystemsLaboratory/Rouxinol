#include<stdio.h>
int main(){
	int i,n,j,k,o,count=0;
	int a[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&o);
		for(j=0;j<n;j++){
			if(a[j]==o){
				count++;
				break;
			}
		}
	}
	printf("%d\n",count);
} 
