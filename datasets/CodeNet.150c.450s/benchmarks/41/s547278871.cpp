#include<cstdio>
#include<vector>
#include<algorithm>
#include<limits>

int infty = std::numeric_limits<int>::max();

int main(void){
	int V,E,s,t, d;
	scanf("%d %d",&V,&E);
	std::vector< std::vector<int> > A;
	A.resize(V);
	for (int i=0; i<V;i++){
		A[i].resize(V);
		for(int j=0; j<V; j++){
			if (i==j) A[i][j] = 0;
			else A[i][j] = infty;
		}
	}
	for(int i=0;i<E;i++){
		scanf("%d %d %d", &s, &t, &d);
		A[s][t] = d;
	}
	for(int k=0; k<V; k++){
		for(int i=0;i<V;i++){
			if(A[i][k] == infty) continue;
			for (int j=0;j<V;j++){
				if (A[k][j] != infty){
					A[i][j] = std::min(A[i][j], A[i][k]+A[k][j]);
				}
			}
		}
	}
	
	for(int i=0;i<V;i++){
		if(A[i][i]<0){
			printf("NEGATIVE CYCLE\n");
			return 0;
		}
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(A[i][j] == infty) printf("INF");
			else printf("%d", A[i][j]);
                        if(j!=V-1) printf(" ");
		}
		printf("\n");
	}
	return 0;

}