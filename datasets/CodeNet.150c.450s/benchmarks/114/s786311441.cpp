#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef vector <int> vi;
typedef vector <vi> vvi;
struct edge{
	int from;
	int to;
};
typedef multimap <int, edge, less<int> > mme;

int addedge(vvi &graph, int y, int x, int val=1){
	graph[y][x] = val;
	return val;
}

int make_graph(vvi &graph, vi &stamp){
	int n=graph.size(), val;

	for (int j=0; j<n; j++){
		for (int i=0; i<n; i++){
			cin>>val;
			addedge(graph, i, j, val);
		}
		stamp[j] = 0;
	}
	return 0;
}

int Minimum_Spanning_Tree(vvi &graph, vi &stamp){

	mme edges;
	int n = graph.size(), p1, p2, p3, total=0;
	p1=0;
	stamp[p1] = 1;

	while (p1!=-1){
		for (int p2=0; p2<n; p2++){
			int *tmp=&graph[p1][p2];
			if (*tmp!=-1 && stamp[p2]==0){
				edge e;
				e.from = p1;
				e.to = p2;
				edges.insert(pair <int, edge> (*tmp, e));
			}
		}
		p1=-1;
		while (! edges.empty()){
			mme::iterator const it = edges.begin();
			if (stamp[it->second.from]==1 && stamp[it->second.to]==0){
				p1 = it->second.to;
				stamp[p1]=1;
				total+=it->first;
				edges.erase(it);
				break;
			}
			edges.erase(it);
		}
	}
	return total;
}

int resultout(vvi &graph){
	for (int i=0; i<int(graph.size()); i++){
		for (int j=0; j<int(graph.size()); j++){
		cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

int main(void){

	int n, row;
	cin>>n;
	vvi G(n, vi(n));
	vi stamp(n);

	make_graph(G, stamp);

	cout<<Minimum_Spanning_Tree(G, stamp)<<endl;

	return 0;
} 