#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define int long long
#define P pair<int,int>

struct UnionFind {
    vector<int> Parent;
    vector<int> Size;

    explicit UnionFind(int N) : Parent(N), Size(N,1){
        for(int i = 0; i < N; i++) Parent[i] = i;
    }

    int root(int A) {
        if (Parent[A] == A) return A;
        return Parent[A] = root(Parent[A]);
    }

    bool merge(int A, int B) {
        A = root(A);
        B = root(B);
        if (A == B) return false;

        if (Size[A] < Size[B]) swap(A, B);

        Size[A] += Size[B];
        Parent[B] = A;
        return true;
    }

    bool issame(int A, int B) { //
        return root(A) == root(B);
    }

    int findsize(int A) {
        return Size[root(A)];
    }
};

struct edge {
    int u, v, cost;
};

bool comp(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}

const int MAX_E = 100010;

edge es[MAX_E];
int V,E;

int kruskal(){
    sort(es, es + E, comp);
    UnionFind Tree(V);
    int res = 0;
    for(int i = 0; i < E; i++){
        edge e = es[i];
        if(!Tree.issame(e.u, e.v)){
            Tree.merge(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}


signed main() {
    cin >> V >> E;
    for(int i = 0; i < E; i++){
        int u, v, cost;
        cin >> u >> v >> cost;
        edge e = {u, v, cost};
        es[i] = e;
    }

    cout << kruskal() << endl;
}


