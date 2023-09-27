#include <cstdio>

int main()
{
	int n, i, j;
	scanf("%d", &n);

	int a[n];
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int b[n];
	for(i = n - 1; i >= 0; i--){
		j = n - 1 - i;
		b[j] = a[i];
	}

	for(i = 0; i < n; i++){
		if(i == 0) printf("%d", b[i]);
		else printf(" %d", b[i]);
	}

	printf("\n");
	
	return 0;
}