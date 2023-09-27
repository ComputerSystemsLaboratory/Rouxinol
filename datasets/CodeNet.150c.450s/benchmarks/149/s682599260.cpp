#include <bits/stdc++.h>
using namespace std;

class UnionFindDS{
private:
    vector<int> p, sz;   // parent, height, size
    int num;
public:
    UnionFindDS(int N){
        p.assign(N,0); for (int i = 0; i < N; i++) p[i] = i;
        sz.assign(N,1); num = N;
    }
    int numSets(){ return num; }
    int findSet(int i){ return p[i] == i ? i : p[i] = findSet(p[i]); }
    int sizeSet(int i){ return sz[findSet(i)]; }
    bool isSameSet(int i, int j){ return findSet(i) == findSet(j); }
    void unionSet(int i, int j){
        if ((i = findSet(i)) == (j = findSet(j))) return;
        
        num--;
        p[j] = i; sz[i] += sz[j];
    }
};

int N, M;

int main() {

    scanf("%d%d",&N,&M); UnionFindDS uf(N);
    for (int i = 0, op, u, v; i < M; i++) {
        scanf("%d%d%d",&op,&u,&v);

        if (op)
            printf("%d\n", uf.isSameSet(u,v) ? 1 : 0);
        else
            uf.unionSet(u,v);
    }

    return 0;
}