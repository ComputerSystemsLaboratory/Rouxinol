#include <cstdio>

int main(){
	int n;
	int a[100];
	
	scanf(" %d", &n);
	for(int i=0; i<n; ++i)
		scanf(" %d", &a[i]);

	for(int i=n-1; i>=0; --i) {
		printf("%d", a[i]);
		if(i!=0) printf(" ");
	}
	printf("\n");

	return 0;
}