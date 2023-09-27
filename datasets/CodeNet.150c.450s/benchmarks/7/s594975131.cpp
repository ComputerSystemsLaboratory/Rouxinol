#include<stdio.h>
int main(void){
	int n, h[3]={-1,-1,-1};
	int i, j, k;
	for(i=0;i<10;i++){
		scanf("%d", &n);
		for(j=0;j<3;j++){
			if(h[j] < n){
				for(k=2;k>j;k--){
					h[k] = h[k-1];
				}
				h[j]=n;
				break;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d\n", h[i]);
	}
	return 0;
}