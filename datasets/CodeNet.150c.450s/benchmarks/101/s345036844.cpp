#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct UnionFind{
    vector<int> parent;
    UnionFind(int size): parent(size, -1) {}
    
    int root(int x){
        return parent[x]<0? x: parent[x] = root(parent[x]);
    }
    void uniteSet(int x, int y){
        x = root(x);
        y = root(y);
        if (x==y) return;
        if (parent[x]>parent[y]) swap(x,y);
        //parent[x] += parent[y];
        parent[y] = x;
    }
    bool findSet(int x, int y){
        return root(x) == root(y);
    }
};

int main(){cin.tie(0);ios::sync_with_stdio(false);
    
    int nb_v, nb_lines;
    cin >>nb_v
        >>nb_lines;
    UnionFind G(nb_v);
    for(int i=0; i<nb_lines; ++i){
        int v1, v2;
        cin >>v1
            >>v2;
        G.uniteSet(v1,v2);
    }

    cin >>nb_lines;
    for(int i=0; i<nb_lines; ++i){
        int v1, v2;
        cin >>v1
            >>v2;
        cout<<(G.findSet(v1, v2)? "yes\n":"no\n");
    }    
}