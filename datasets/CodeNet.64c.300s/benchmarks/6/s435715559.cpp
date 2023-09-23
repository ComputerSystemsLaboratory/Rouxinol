#include <cstdio>
using namespace std;

int data[5][4][11]={{{0}}};

int main (void)
{
	int b, f, r, v, n, i, j, p;
	scanf("%d", &n);

	for (i=1; i<=n; i++){
		scanf("%d %d %d %d", &b, &f, &r, &v);
		data[b][f][r] += v;
	}

	for (i=1; i<=4; i++){
		for (j=1; j<=3; j++){
			for (p=1; p<=10; p++){
				printf(" %d", data[i][j][p]);
			}
			printf("\n");
		}
		if (i != 4)
			printf("####################\n");
	}
	return 0;
}