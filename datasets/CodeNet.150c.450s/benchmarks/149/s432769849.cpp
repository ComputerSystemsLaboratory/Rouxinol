#include<iostream>
#define MAX_NODE 10000

using namespace std;

typedef struct{
	int parent,rank;
} Node;

Node node[MAX_NODE];

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

void same(int x,int y){
	cout<<(find(x)==find(y)?1:0)<<endl;
}	

int main(){
	int n,q,com,x,y;
	cin>>n>>q;
	init(n);
	for(int i=0;i<q;i++){
		cin>>com>>x>>y;
		if(com==0){
			unite(x,y);
		}else{
			same(x,y);
		}
	}
	return 0;
}