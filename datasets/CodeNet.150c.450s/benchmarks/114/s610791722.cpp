#include <cstdio>
#include <vector>

int main(void){
	int n, min_edge, next_node, count, sum;
	scanf("%d", &n);
	std::vector< std::vector<int> > edges;
	std::vector<int> isUsed;
	edges.resize(n);
	isUsed.resize(n);
	for(int i=0;i<n;i++){
		isUsed[i]=-1;
		edges[i].resize(n);
		for(int j=0;j<n;j++){
			scanf("%d", &edges[i][j]);
		}
	}

	min_edge=3000;
	isUsed[0] = 1;
	count = 0;
	sum=0;
	while(count<n-1){
		for(int i=0;i<n;i++){
			if(isUsed[i]==1){
				for(int j=0;j<n;j++){
					if (isUsed[j]==-1 && edges[i][j]>-1 && edges[i][j]<min_edge){
						min_edge = edges[i][j];
						next_node = j;
					}
				}
			}
		}
		sum += min_edge;
		isUsed[next_node]=1;
		min_edge = 3000;
		count += 1;
	}
	printf("%d\n", sum);
	return 0;
}