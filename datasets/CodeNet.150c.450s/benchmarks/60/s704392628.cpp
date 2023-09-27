#include <cstdio>
#include <vector>

int main(){
	std::vector< std::vector<int> > M;
	int n, r, k, c;
	scanf("%d", &n);
	M.resize(n);
	for (int i=0;i<n;i++){
		M[i].resize(n);
		scanf("%d %d", &r, &k);
		for (int j=0; j<k;j++){
			scanf("%d", &c);
			M[i][c-1]=1;
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d", M[i][j]);
                        if (j!=n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}