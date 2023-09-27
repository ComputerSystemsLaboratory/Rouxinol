#include<stdio.h>

int main(void){
	int ans[50],temp;
	int a,b,w,n;

	scanf("%d\n%d",&w,&n);
	
	for(int i=1;i<=w;i++){
		ans[i]=i;
	}
	for(int i=1;i<=n;i++){
		scanf("%d,%d",&a,&b);
		temp=ans[a];
		ans[a]=ans[b];
		ans[b]=temp;
	}
	for(int i=1;i<=w;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}