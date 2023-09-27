#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct UnionFind{
    UnionFind(int size):_array(size, -1){
    }

    bool same(int x, int y){
        return root(x) == root(y);
    }

    void unify(int x, int y){
        int rootx = root(x);
        int rooty = root(y);
        if( rootx == rooty ){
            return;
        }
        if( size(rootx) < size(rooty) ) swap(rootx,rooty);
        _array[rootx] += _array[rooty];
        _array[rooty] = rootx;
    }

    int root(int x){
        if( _array[x] < 0 ){
            return x;
        }
        return _array[x] = root(_array[x]);
    }

    int size(int x){
        return -_array[root(x)];
    }

    vector<int> _array;
};

void DFS(vector<vector<int>>& graph, int v, vector<int>& visited, int root, UnionFind& uf){
    visited[v] = true;
    uf.unify(v, root);
    for(int i = 0 ; i < graph[v].size(); i++){
        if(visited[graph[v][i]] == false){
            DFS(graph, graph[v][i], visited, root, uf);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for(int i = 0; i < m; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    vector<int> visited(n, false);
    UnionFind uf(n);

    for(int i = 0; i < n ; i++){
        if( visited[i] == false ){
            DFS(graph, i, visited, i, uf);
        }
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++ ){
        int v1, v2;
        cin >> v1 >> v2;
        if( uf.same(v1, v2) ){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }

    return 0;

}

