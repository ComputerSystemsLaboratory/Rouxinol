#include <iostream>
#include <vector>

using namespace std;

struct UF {
    vector<int> a;
    vector<int> size;
    
    UF(int n) {
        a.assign(n, 0);
        size.assign(n, 1);
        for (int i = 0; i < n; i++) {
            a[i] = i;
        }
    }
    
    int root(int u)  {
        int parent = u;
        while (a[parent] != parent) {
            parent = a[parent];
        }
        return parent;
    }
    
    bool same(int u, int v) {
        return root(u) == root(v);
    }
    
    void unite(int u, int v) {
        int i = root(u);
        int j = root(v);
        if (i != j) {
            if (size[i] > size[j]) {
                a[j] = i;
                size[i] += size[j];
            }
            else {
                a[i] = j;
                size[j] += size[i];
            }
        }
    }  
};

int main() {
    int n, q;
    cin >> n >> q;
    UF uf = UF(n + 1);
    for (int i = 0; i < q; i++) {
        int cmd, u, v;
        cin >> cmd >> u >> v;
        if (cmd == 0) {
            uf.unite(u, v);
        }
        else {
            cout << (uf.same(u, v) ? 1 : 0) << endl;
        }
    }
    return 0;
}