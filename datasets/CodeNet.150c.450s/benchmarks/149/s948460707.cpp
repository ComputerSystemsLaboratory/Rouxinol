#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

struct UnionFind
{
    vector<int> data;
    UnionFind() {}

    // initialize
    UnionFind(int size) : data(size, -1) {}

    void unite_set(int x, int y){
        x = root(x);
        y = root(y);
        bool is_unite = (x != y);
        
        if (is_unite){
            if (data[y] < data[x]){
                swap(x, y);
            }
            data[x] += data[y];
            data[y] = x;
        }
    }

    bool is_same(int x, int y){
        return root(x) == root(y);
    }

    int root(int x){
        return (data[x] < 0) ? x : data[x] = root(data[x]);
    }

    int size(int x){
        return -data[root(x)];
    }
};

int main()
{
    int n, q;
    int c, a, b;
    cin >> n >> q;
    struct UnionFind d(n);
    vector<int> data;
    data.resize(n);
    
    for (int i=0; i<n; ++i){
        data[i] = i;
    }
    // query
    for (int i=0; i<q; ++i){
        cin >> c >> a >> b;
        // same
        if(c == 1){
            cout << d.is_same(a, b) << endl;
        }
        // unite
        else {
            d.unite_set(a, b);
        }
    }
}

