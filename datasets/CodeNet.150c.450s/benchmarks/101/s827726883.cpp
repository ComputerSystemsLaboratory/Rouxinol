#include <iostream>
#include <vector>

using namespace std;

class Disjoint {
public:
    Disjoint(int n) {
        for (int i = 0; i < n; i++) {
            id.push_back(i);
            size.push_back(1);
        }
    }

    bool isConnected(int s, int t) {
        return find(s) == find(t);
    }

    int find(int vertex) {
        while (vertex != id[vertex]) {
            id[vertex] = id[id[vertex]];
            vertex = id[vertex];
        }
        return vertex;
    }

    void connect(int s, int t) {
        int sRoot = find(s);
        int tRoot = find(t);

        if (sRoot == tRoot)
            return;

        if (size[sRoot] < size[tRoot]) {
            size[tRoot] += size[sRoot];
            id[sRoot] = id[tRoot];
        }
        else {
            size[sRoot] += size[tRoot];
            id[tRoot] = id[sRoot];
        }
    }

private:
    vector<int> id;
    vector<int> size;
};

int main() {
    int n, m;
    cin >> n >> m;

    Disjoint disjoint = Disjoint(n);
    int s, t;
    for (int i = 0; i < m; i++) {
        cin >> s >> t;
        disjoint.connect(s, t);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        if (disjoint.isConnected(s, t))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}

