#include<iostream>
#include<vector>
#include<algorithm>

#define MAX_NODE 10000

using namespace std;

typedef struct{
	int from,to,weight;
} Edge;

typedef struct{
	int parent,rank;
} Node;

Node node[MAX_NODE];
vector<Edge> edge;

void init(int n){
	for(int i=0;i<n;i++){
		node[i].parent=i;
		node[i].rank=0;
	}
}

int find(int n){
	return node[n].parent==n?n:node[n].parent=find(node[n].parent);
}

void unite(int x,int y){
	int xr=find(x);
	int yr=find(y);
	if(node[xr].rank>node[yr].rank){
		node[yr].parent=node[xr].parent;
	}else if(xr!=yr){
		node[xr].parent=node[yr].parent;
		if(node[xr].rank==node[yr].rank){
			node[yr].rank++;
		}
	}
}

bool operator<(const Edge& left,const Edge& right){
	return (left.weight<right.weight?1:0);
}

int main(){
	int n,tmp,w=0;
	Edge e;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>tmp;
			if(tmp!=-1){
				e.from=i;
				e.to=j;
				e.weight=tmp;
				edge.push_back(e);
			}
		}
	}
	sort(edge.begin(),edge.end());
	init(n);
	for(int i=0;i<edge.size();i++){
		if(find(edge[i].from)==find(edge[i].to)){
			continue;
		}
		w+=edge[i].weight;
		unite(edge[i].from,edge[i].to);
	}
	cout<<w<<endl;
	return 0;
}