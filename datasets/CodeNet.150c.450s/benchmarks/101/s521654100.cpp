#include<vector>

class UnionFind {
public:
    UnionFind(int N) :parent(N), rank(N, 0), size(N, 1) {
        for (int i = 0; i < N; ++i) parent[i] = i;
    }
    int find(int x) {
        return x == parent[x] ? x : parent[x] = find(parent[x]);
    }
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    void unite(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return;
        if (rank[x] < rank[y]) parent[x] = y;
        else {
            parent[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
            std::swap(x, y);
        }
        size[y] += size[x];
        size[x] = 0;
    }
    int getParentRank(int x) {
        return rank[find(x)];
    }
    int getParentSize(int x) {
        return size[find(x)];
    }
    int getSize(int x) {
        return size[x];
    }
private:
    std::vector<int> parent, rank, size;
};
#include<iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    UnionFind UF(n);
    for(int i=0;i<m;++i){
        int a,b;
        cin>>a>>b;
        UF.unite(a,b);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int a,b;
        cin>>a>>b;
        cout<<(UF.same(a,b)?"yes":"no")<<endl;
    }
}