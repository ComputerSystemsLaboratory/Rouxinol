#include <cstdio>
#include <string.h>
using namespace std;

int main (void)
{
	int i, h, x, n, j;
	char a[201], b[201];

	while (scanf("%s", a) != EOF && a[0] != '-'){
		scanf("%d", &h);
		for (i=0; i<h; i++){
			x=0;
			scanf("%d", &n);
			for (j=n; a[j] != '\0'; j++)
				b[x++] = a[j];
			for (j=0; j<n; j++)
				b[x++] = a[j];

			strcpy (a, b);
			a[x] = '\0';
		}
		printf("%s\n", a);
	}

	return 0;
}