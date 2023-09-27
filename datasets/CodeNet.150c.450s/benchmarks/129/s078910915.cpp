#include <cstdio>
using namespace std;

int data[101][101] = {{0}};

int main (void)
{
	int r, c, i, j;

	scanf("%d %d", &r, &c);

	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			scanf("%d", &data[i][j]);
			data[i][c] += data[i][j];
			data[r][j] += data[i][j];
		}
		data[r][j] += data[i][c];
	}

	for (i=0; i<=r; i++){
		for (j=0; j<=c; j++){
			printf("%d", data[i][j]);
			if (j != c)
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}