#include <iostream>
#include <vector>
using namespace std;

class DisJointSet {
public:
    vector<int> rank, p;
    DisJointSet();
    DisJointSet(int n) {
        rank.resize(n, 0);
        p.resize(n, 0);
        for (int i = 0; i < n; i++) createSet(i);
    }
    
    void createSet(int i) {
        rank[i] = 0;
        p[i] = i;
    }
    
    int find(int i) {
        if (p[i] != i) {
            p[i] = find(p[i]);
        }
        return p[i];
    }
    
    void unite(int a, int b) {
        int pa = find(a);
        int pb = find(b);
        if (rank[pa] > rank[pb]) {
            p[pb] = pa;
        } else if (rank[pa] == rank[pb]) {
            p[pb] = pa;
            rank[pa] += 1;
        } else {
            p[pa] = pb;
        }
    }
    
    bool same(int a, int b) {
        return (find(a) == find(b));
    }
    
    
};

int main(int argc, const char * argv[]) {
    int n,q,c,x,y;
    cin >> n >> q;
    DisJointSet d = DisJointSet(n);
    for (int i = 0; i < q; i++) {
        cin >> c >> x >> y;
        if (c == 0) {
            d.unite(x, y);
        } else {
            if (d.same(x, y)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}