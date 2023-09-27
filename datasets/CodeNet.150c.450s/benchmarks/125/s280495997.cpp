#include <cstdio>

typedef struct{
	bool isVisited;
	int degree;
	int start;
	int end;
	int *neighbors;
} node;

int count = 0;

void dfs(node* nodes, int id){
	nodes[id].isVisited = true;
	if (nodes[id].start == 0) nodes[id].start=count;
	for (int i=0; i<nodes[id].degree; i++){
		if (!nodes[nodes[id].neighbors[i]].isVisited){
			count ++;
			dfs(nodes, nodes[id].neighbors[i]);
		}
	}
	count++;
	nodes[id].end = count;
}

int main(){
	int n, d, r, id;
	node *nodes;

	scanf("%d", &n);
	nodes = new node[n+1];
	nodes[0].start=0;
	nodes[0].degree=n;
	nodes[0].neighbors = new int[n];
	for (int i=0;i<n;i++){
		nodes[0].neighbors[i]=i;
	}
	for (int i=1; i<n+1;i++){
		nodes[i].isVisited=false;
		scanf("%d %d", &r, &d);
		nodes[i].degree=d;
		nodes[i].neighbors = new int[d];
		nodes[i].start = 0;
		
		for (int j=0;j<d;j++){
			scanf("%d", &id);
			nodes[i].neighbors[j] = id;
		}
	}

	dfs(nodes, 0);
	for (int i=1; i<n+1;i++){
		printf("%d %d %d\n", i, nodes[i].start, nodes[i].end);
		delete []nodes[i].neighbors;
	}
	delete []nodes;
	return 0;
}