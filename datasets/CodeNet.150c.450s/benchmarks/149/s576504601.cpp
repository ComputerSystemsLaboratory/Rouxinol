#include "bits/stdc++.h"

using namespace std;

struct UF {
	vector<int> data;
	UF(int size) : data(size, -1) { }
	bool unite(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool find(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
		return -data[root(x)];
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,q;cin>>n>>q;
    UF uf(n+1);
    for(int i=0;i<q;i++){
        int com,x,y;cin>>com>>x>>y;
        if(com){
            cout<<(uf.find(x,y) ? 1 : 0)<<endl;
        }
        else uf.unite(x,y);
    }
}