#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[200020];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-k;i++){
		if(a[i]<a[i+k])
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}