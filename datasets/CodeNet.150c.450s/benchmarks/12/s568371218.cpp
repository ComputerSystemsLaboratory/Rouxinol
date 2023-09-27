#include<stdio.h>
int h[251];
int main(){
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&h[i]);
	} 
	for(int i=1;i<=n;i++){
		printf("node %d: ",i);
		printf("key = %d, ",h[i]);
		if(i/2>=1)printf("parent key = %d, ",h[i/2]);
		if(2*i<=n)printf("left key = %d, ",h[2*i]);
		if(2*i+1<=n)printf("right key = %d, ",h[2*i+1]);
		printf("\n");
	} 
	return 0;
} 
