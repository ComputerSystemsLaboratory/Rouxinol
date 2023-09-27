#include<cstdio>

int main(){
	int w,n,a,b;
	scanf("%d", &w);
	int c[w + 1];
	for(int i = 0; i <= w; i++){
		c[i] = i;
	}
	scanf("%d", &n);
	while(n){
		n--;
		scanf("%d,%d", &a, &b);
		c[0] = c[a];
		c[a] = c[b];
		c[b] = c[0];
	}
	for(int i = 1; i <= w; i++){
		printf("%d\n", c[i]);
	}
	return 0;
}