#include <stdio.h>
int main(){
	int n,now=-1,temp,a[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]<=a[n-1]){
			now++;
			temp=a[i];
			a[i]=a[now];
			a[now]=temp;
		}
	}
	for(int i=0;i<now;i++)printf("%d ",a[i]);
	printf("[%d]",a[now]);
	for(int i=now+1;i<n;i++)printf(" %d",a[i]);
	printf("\n");
}