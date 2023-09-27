#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define INFTY (1<<30)

int m[101][101];
int p[101];
int n;

void multiplyMatrix(){
	int i, l, j, k;
	for(i = 1;i <= n;i++)
		m[i][i] = 0;
	
	for(l = 2;l <= n;l++){
		for(i = 1;i <= n - l + 1;i++){
			j = i + l - 1;
			m[i][j] = INFTY;
			for(k = i;k < j;k++)
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
		}
	}
}

int main(void){
	int i;
	scanf("%d", &n);
	for(i = 0;i < n;i++)
		scanf("%d %d", &p[i], &p[i + 1]);
	multiplyMatrix();
	printf("%d\n", m[1][n]);
	return 0;
}