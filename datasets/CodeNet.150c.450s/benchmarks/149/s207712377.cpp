#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

class DisjointSet{
	public:
		vector<int> rank, p;
	
	//constructor	
	DisjointSet() {}
	DisjointSet(int size){
		rank.resize(size, 0);
		p.resize(size, 0);
		for(int i=0; i<size; ++i) makeSet(i);
	}		
	
	
	void makeSet(int x){
		p[x]=x;
		rank[x]=0;	
	}
	
	bool same(int x, int y){
		return findSet(x)==findSet(y);
	}

	void unite(int x, int y){
		link(findSet(x), findSet(y));	
	}
	
	void link(int x, int y){
		if(rank[x]>rank[y]){
			p[y]=x;	
		}	
		else {
			p[x]=y;
			
			if(rank[x]==rank[y]) rank[y]++;
		}
	}
	
	int findSet(int x){
		if(x!=p[x]) p[x]=findSet(p[x]);
			
		return p[x];
	}	
};

int main(){
	int n;
	long q;
	scanf(" %d %ld", &n, &q);
	
	DisjointSet ds = DisjointSet(n);
	
	for(long i=0; i<q; ++i){
		int com, x, y;
		scanf(" %d %d %d", &com, &x, &y);
		
		if(com==0) ds.unite(x,y);	
		else if(com==1){
			if(ds.same(x,y)) printf("1\n");
			else printf("0\n");
		}
		
	}
}