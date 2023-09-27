#include <cstdio>


int main(){
	int n;
	scanf("%d", &n);
	short a[n+1];
	int c[10001];
	for(int i = 0; i < 10001; i++){
		c[i] = 0;
	}
	for(int i = 1; i <= n; i++){
		scanf("%hd", &a[i]);
	}
	
	for(int i = 1; i <= n; i++){
		c[a[i]]++;
	}

	for(int i = 1; i < 10001; i++){
		c[i] = c[i] + c[i-1];
	}

	short b[n+1];

	for(int i = n; i > 0; i--){
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}
	
	
	for(int i = 1; i <= n; i++){
		if(i > 1){
			printf(" ");
		}
		printf("%d", b[i]);
	}
	printf("\n");
	
	return 0;
}