#include <cstdio>
#include <algorithm>

int main(void){
	int i,j,k,n,p[101], m[101][101];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &p[i], &p[i+1]);
	}
	
	for(i=n-2;i>=0;i--){
		m[i+1][i+1] = 0;
		for(j=i+1;j<n;j++){
			m[i][j] = p[i]*p[i+1]*p[j+1] + m[i+1][j];
			for(k=i+1;k<j;k++){
				m[i][j] = std::min(m[i][j], m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1]);
			}
		}
	}

	printf("%d\n", m[0][n-1]);

	return 0;
}