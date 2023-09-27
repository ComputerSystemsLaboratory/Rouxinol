#include <cstdio>
#include <queue>


std::queue<int> q;
typedef struct{
	bool isVisited;
	int degree;
	int distance;
	int *neighbors;
} node;

void bfs(node* nodes){
	int id;
	while (!q.empty()){
		id = q.front();
		q.pop();
		for (int i=0; i<nodes[id].degree; i++){
			if (!nodes[nodes[id].neighbors[i]].isVisited){
				nodes[nodes[id].neighbors[i]].distance = nodes[id].distance+1;
				q.push(nodes[id].neighbors[i]);
				nodes[nodes[id].neighbors[i]].isVisited=true;
			}
		}
	}
}

int main(){
	int n, d, r, id;
	node *nodes;

	scanf("%d", &n);
	nodes = new node[n+1];
	for (int i=0; i<n;i++){
		nodes[i].isVisited=false;
		scanf("%d %d", &r, &d);
		nodes[i].degree=d;
		nodes[i].neighbors = new int[d];
		nodes[i].distance=-1;
		
		for (int j=0;j<d;j++){
			scanf("%d", &id);
			nodes[i].neighbors[j] = id-1;
		}
	}
	q.push(0);
	nodes[0].isVisited=true;
        nodes[0].distance=0;
	bfs(nodes);
	for (int i=0; i<n;i++){
		printf("%d %d\n", i+1, nodes[i].distance);
		delete []nodes[i].neighbors;
	}
	delete []nodes;
	return 0;
}