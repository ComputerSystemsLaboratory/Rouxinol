#include <iostream>
#include <vector>
using namespace std;
struct UnionFind{
    vector<int> data;
    UnionFind(int nb_v) : data(nb_v, -1) {}
    
    bool unionSet(int x, int y){
        x = root(x);
        y = root(y);
        if (x != y){
            if (data[x] > data[y]) swap(x,y);
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }
    bool findSet(int x, int y){
        return root(x) == root(y);    
    }
    int root(int x){
        return data[x] < 0? x: data[x] = root(data[x]);
    }
};

int main(void){cin.tie(0);ios::sync_with_stdio(false);
    
    int nb_v, nb_lines;
    cin >>nb_v
        >>nb_lines;
    UnionFind G(nb_v);
    for(int i=0; i<nb_lines; ++i){
        int query, v1, v2;
        cin >>query
            >>v1
            >>v2;
            
        switch (query){
            case 0:{
                G.unionSet(v1, v2);
                break;
            }
            case 1:{
                cout<<G.findSet(v1, v2)<<endl;
                break;
            }
        }
    }
}