#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
    vector<int> par,rank;

    UnionFind(int n){
        par.resize(n);
        rank.resize(n);
        for(int i=0; i<n; i++){
            par[i]=i;
            rank[i]=0;
        }
    }

    void unite(int x,int y)
    {
        x = root(x);y = root(y);
        if(x == y) return;

        if( rank[x] < rank[y] )
        {
            par[x] = y;
        }
        else
        {
            par[y] = x;
            if(rank[x] == rank[y])
            {
                rank[x]++;
            }
        }
    }

    bool same(int x,int y)
    {
        return root(x) == root(y);
    }

    int root(int x)
    {
        if (x == par[x]) return x;

        return par[x] = root(par[x]);
    }
};


int main() {
    int N,Q;
    cin >> N >> Q;

    UnionFind u(N);

    for(int i=0; i<Q; i++) {
        int p,a,b;
        cin >> p >> a >> b;

        if(p) {
            cout << (u.same(a,b) ? 1 : 0) << endl;
        }else{
            u.unite(a,b);
        }
    }
}