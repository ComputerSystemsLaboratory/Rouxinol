#include <stdio.h>

int main(void){
	int w=0, n=0;
	int a=0, b=0, t=0;
	int c[30];

	scanf("%d", &w);
	scanf("%d", &n);

	for(int i=0;i<w;++i){
		c[i] = i+1;
	}
	for(int i=0;i<n;++i){
		scanf("%d,%d", &a, &b);
		t = c[b-1];
		c[b-1] = c[a-1];
		c[a-1] = t;
	}
	for(int i=0; i<w;++i){
		printf("%d\n", c[i]);
	}
	return 0;
}