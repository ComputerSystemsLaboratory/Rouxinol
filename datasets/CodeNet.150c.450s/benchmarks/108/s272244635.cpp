#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef vector <int> vi;
typedef vector <vi> vvi;

int addedge(vvi &graph, int y, int x, int val=1){
	graph[y][x] = val;
	return val;
}

int make_graph(vvi &graph, vi &stamp){
	int n1=graph.size(), n2, row, col;

	for (int j=0; j<n1; j++){
		cin>>row;
		cin>>n2;
		for (int i=0; i<n2; i++){
			cin>>col;
			addedge(graph, row-1, col-1);
		}
		stamp[j] = -1;
	}
	return 0;
}

int Breadth_First_Search(vvi &graph, vi &stamp){

	queue <int>qu;
	qu.push(0);
	stamp[0] = 0;
	while (! qu.empty()){
		int tmp = qu.front();
		qu.pop();
		for (int i=0; i<(int)graph[0].size(); i++){
			if (graph[tmp][i]==1 && stamp[i]==-1){
				stamp[i] = stamp[tmp]+1;
				qu.push(i);
			}
		}
	}
	return 0;
}

int resultout(vi &stamp){
	for (int i=0; i<int(stamp.size()); i++){
		cout<<i+1<<" "<<stamp[i]<<endl;
	}
	return 0;
}

int main(void){

	int n, row;
	cin>>n;
	vvi G(n, vi(n));
	vi stamp(n);

	make_graph(G, stamp);

	Breadth_First_Search(G, stamp);

	resultout(stamp);

	return 0;
} 