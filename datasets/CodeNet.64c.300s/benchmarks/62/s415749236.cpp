#include <cstdio>
using namespace std;

int a[1000][1000]={{0}};
int b[1000]={0};

int main (void)
{
	int n, m, i, j, x, y, sum=0;

	scanf("%d %d", &x, &y);

	for (i=0; i<x; i++){
		for (j=0; j<y; j++)
			scanf("%d", &a[i][j]);
	}

	for (i=0; i<y; i++)
		scanf("%d", &b[i]);

	for (i=0; i<x; i++){
		sum = 0;
		for (j=0; j<y; j++){
			sum += a[i][j]*b[j];
		}
		printf("%d\n", sum);
	}
	return 0;
}