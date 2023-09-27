using namespace std;
class UnionFind {
    private:
        unsigned n_;
        unsigned *parents_;
    public:
        UnionFind(unsigned n = 0): n_(n), parents_(new unsigned[n_]) {
            for (unsigned i = 0; i < n_; ++i) {
                parents_[i] = i;
            }
        }
        virtual ~UnionFind() {
            delete[] parents_;
        }
        UnionFind &operator=(const UnionFind &uf) {
            delete[] parents_;
            n_ = uf.n_;
            parents_ = new unsigned[n_];
            for (unsigned i = 0; i < n_; ++i) {
                parents_[i] = uf.parents_[i];
            }
            return *this;
        }
        unsigned find(unsigned i) {
            if (parents_[i] == i) {
                return i;
            }
            return parents_[i] = find(parents_[i]);
        }
        void unite(unsigned i, unsigned j) {
            unsigned pi = find(i);
            parents_[pi] = find(j);
        }
};

#include <iostream>
int main() {
    unsigned n, q, com, x, y;
    UnionFind uf;
    cin >> n >> q;
    uf = UnionFind(n);
    for (unsigned i = 0; i < q; ++i) {
        cin >> com >> x >> y;
        if (com == 0) {
            uf.unite(x, y);
        } else {
            cout << (uf.find(x) == uf.find(y)? 1: 0) << endl;
        }
    }
    return 0;
}