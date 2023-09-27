#include<cstdio>
int main(void){
	int a[4][3][10];
	int p;
	int q;
	int r;
	int s;
	int n;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				a[i][j][k] = 0;
			}
		}
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d %d %d", &p, &q, &r, &s);
		a[p - 1][q - 1][r - 1] = a[p - 1][q - 1][r - 1] + s;
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				printf(" %d",a[i][j][k]);
			}
			printf("\n");
		}
		if(i<3)printf("####################\n");
	}
	return 0;
}