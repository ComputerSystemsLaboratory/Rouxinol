#include <bits/stdc++.h>

using namespace std;

class UnionFindDS{
private:
    vector<int> p, h, sz;   // parent, height (rank), size
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
        else            { p[x] = y; sz[y] += sz[x]; h[y] += (h[y] == h[x]); }
    }
};

int N, M, op, p, q;

int main(){

    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    UnionFindDS uf(N);

    for (int i=0; i<M; i++){
        cin >> op >> p >> q;

        if (op == 0){
            uf.unionSet(p,q);
        }
        else{
            if (uf.isSameSet(p,q)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}