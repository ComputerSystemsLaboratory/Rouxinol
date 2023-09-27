#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

class UnionFindDS{
private:
	vector<int> p, h, sz;	// parent, height (rank), size
	int num;
public:
	UnionFindDS(int N){
		p.assign(N,0); for (int i=0; i<N; i++) p[i] = i;
		h.assign(N,0); sz.assign(N,1);
		num = N;
	}
	int numSets(){ return num; }
	int findSet(int i){ return p[i] == i ? i : p[i] = findSet(p[i]); }
	int sizeSet(int i){ return sz[findSet(i)]; }
	bool isSameSet(int i, int j){ return findSet(i) == findSet(j); }
	void unionSet(int i, int j){
		int x = findSet(i), y = findSet(j);
		if (x == y) return;
		
		num--;
		if (h[x] > h[y]){ p[y] = x; sz[x] += sz[y]; }
		else			{ p[x] = y; sz[y] += sz[x]; h[y] += (h[y] == h[x]); }
	}
};

priority_queue< iii,vector<iii>,greater<iii> > pq;

int main(){

	ios_base::sync_with_stdio(0);

	int V, E;
	cin >> V >> E;

	int u, v, w;
	for (int i=0; i<E; i++){
		cin >> u >> v >> w;

		pq.push(iii(w,ii(u,v)));
	}

	UnionFindDS uf(V);

	int sum = 0;
	while (uf.numSets() > 1 && !pq.empty()){
		iii front = pq.top(); pq.pop();

		u = front.se.fi; v = front.se.se; w = front.fi;

		if (uf.isSameSet(u,v)) continue;

		uf.unionSet(u,v); sum += w;
	}

	if (uf.numSets() > 1) cout << -1  << endl;		// impossible to form spanning tree
	else 				  cout << sum << endl;

	return 0;
}