#include <cstdio>
#include <vector>

int main(void){

	int n, count, next_node, num_neighbors, min_distance;
	std::vector< std::vector<int> > edges;
	std::vector< std::vector<int> > neighbors;
	std::vector<bool> isUsed;
	std::vector<int> distance;
	scanf("%d", &n);
	edges.resize(n);
	isUsed.resize(n);
	neighbors.resize(n);
	distance.resize(n);
	for(int i=0;i<n;i++){
		scanf("%d %d", &next_node, &num_neighbors);
		edges[next_node].resize(num_neighbors);
		neighbors[next_node].resize(num_neighbors);
		for (int j=0;j<num_neighbors;j++){
			scanf("%d %d", &neighbors[next_node][j], &edges[next_node][j]);
		}
		isUsed[next_node]=-false;
		distance[next_node]=-1;
	}
	isUsed[0] = true;
	distance[0] = 0;
	count=0;
	for(int i=0;i<neighbors[0].size();i++){
		distance[neighbors[0][i]] = edges[0][i];
	}
	int neighbor;
	while(count<n-1){
		min_distance = 100000;
		for(int i=0;i<n;i++){
			if(!isUsed[i] && distance[i] != -1 && distance[i]<min_distance){
				next_node = i;
				min_distance = distance[i];
			}
		}
		isUsed[next_node] = true;
		for(int i=0;i<neighbors[next_node].size();i++){
			neighbor = neighbors[next_node][i];
			if(distance[neighbor] > distance[next_node]+edges[next_node][i] || distance[neighbor] <0){
				distance[neighbor] = distance[next_node] + edges[next_node][i];
			}
		}
		count ++;
	}
	for(int i=0;i<n;i++){
		printf("%d %d\n", i, distance[i]);
	}
	return 0;
}