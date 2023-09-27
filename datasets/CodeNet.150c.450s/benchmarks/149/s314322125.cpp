#include<iostream>
#include<map>
#include<utility>
using namespace std;

template<typename T>
class UnionFind {
    std::map<T, T> parent;
    std::map<T, int> rank;
public:
    void unionSet(const T& a, const T& b) {
        T x = findSet(a), y = findSet(b);
        if(rank[x] < rank[y]) std::swap(x, y);
        parent[y] = x;
        if(rank[x] == rank[y]) rank[x] += 1;
    }
    const T findSet(const T& x) {
        if(!parent.count(x)) {
            rank[x] = 1;
            return parent[x] = x;
        }
        return (parent[x] == x) ? x : (parent[x] = findSet(parent[x]));
    }
};

int main() {
    int n, q;
    cin >> n;
    UnionFind<int> set;
    for(cin >> q; q > 0; --q) {
        int com, x, y;
        cin >> com >> x >> y;
        if(com) {
            cout << (set.findSet(x) == set.findSet(y)) << endl;
        } else {
            set.unionSet(x, y);
        }
    }
}