#include <stdio.h>

int main(){
	int w,n;
	scanf("%d%d", &w,&n);

	int h[w];
	for(int i=0;i<w;i++) h[i] = i+1;

	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d,%d", &a,&b);
		h[a-1] += h[b-1];
		h[b-1] = h[a-1]-h[b-1];
		h[a-1] = h[a-1]-h[b-1];
	}

	for(int i=0;i<w;i++) printf("%d\n", h[i]);
}