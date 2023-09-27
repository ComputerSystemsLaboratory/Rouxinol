#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int parent;
    int rank;
};

vector<Node> v;

void initialize(int n);

int find_set(int x);

void unite(int x, int y);

void disp(vector<Node> v);

bool same(int x, int y);

void initialize(int n) {
    for (int i=0; i<n; i++) {
        Node nd = {i, 0};
        v.push_back(nd);
    }
}

int find_set(int x) {
    if (v[x].parent == x) {
        return x;
    } else {
        return v[x].parent = find_set(v[x].parent);
    }
}

void unite(int x, int y) {
    x = find_set(x);
    y = find_set(y);
    if (x == y) return;

    if (v[x].rank < v[y].rank) {
        v[x].parent = y;
    } else {
        v[y].parent = x;
        if (v[x].rank == v[y].rank) {
            v[x].rank++;
        }
    }
}

void disp(vector<Node> v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i].parent << endl;
    }
}

bool same(int x, int y) {
    return find_set(x) == find_set(y);
}

int main () {
    int n, q;
    int com, x, y;
    cin >> n >> q;
    initialize(n);
    for (int i=0; i<q; i++) {
        cin >> com >> x >> y;
        if (com == 0) {
            unite(x, y);
        } else {
            if (same(x, y)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}