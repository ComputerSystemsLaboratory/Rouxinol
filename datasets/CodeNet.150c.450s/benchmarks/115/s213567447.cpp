#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int c[1010][1010];

void lcs(char X[], char Y[]){
	int m = strlen(X);
	int n = strlen(Y);
	int i, j;
	for(i = 1;i <= m;i++)
		c[i][0] = 0;
	for(j = 1;j <= n;j++)
		c[0][j] = 0;
	for(i = 1;i <= m;i++){
		for(j = 1;j <= n;j++){
			if(X[i - 1] == Y[j - 1])
				c[i][j] = c[i - 1][j - 1] + 1;
			else
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
		}
	}
}

int main(void){
	int q, i;
	char A[1000], B[1000];
	scanf("%d", &q);
	for(i = 0;i < q;i++){
		scanf("%s", A);
		scanf("%s", B);
		lcs(A, B);
		printf("%d\n", c[strlen(A)][strlen(B)]);
	}
	return 0;
}