#include <iostream>
#include <vector>
using namespace std;
typedef vector <int> vi;
typedef vector <vi> vvi;
int counter=0;

int addedge(vvi &graph, int y, int x, int val=1){
	graph[y][x] = val;
	return val;
}

int make_graph(vvi &graph, vvi &stamp){
	int n1=graph.size(), n2, row, col;

	for (int j=0; j<n1; j++){
		cin>>row;
		cin>>n2;
		for (int i=0; i<n2; i++){
			cin>>col;
			addedge(graph, row-1, col-1);
		}
		stamp[j][0] = -1;
	}
	return 0;
}

int Depth_First_Search(vvi &graph, vvi &stamp, int key=0){
	if (stamp[key][0] != -1) return 0;
	stamp[key][0] = ++counter;
	for (int i=0; i<int(graph[0].size()); i++){
		if (graph[key][i]==1 && stamp[i][0]==-1){
			Depth_First_Search(graph, stamp, i);
		}
	}
	stamp[key][1] = ++counter;
	return 0;
}

int resultout(vvi &stamp){
	for (int i=0; i<int(stamp.size()); i++){
		cout<<i+1<<" "<<stamp[i][0]<<" "<<stamp[i][1]<<endl;
	}
	return 0;
}

int main(void){

	int n, row;
	cin>>n;
	vvi G(n, vi(n)), stamp(n, vi(2));

	make_graph(G, stamp);

	for (int i=0; i<n; i++){
		Depth_First_Search(G, stamp, i);
	}
	resultout(stamp);

	return 0;
} 