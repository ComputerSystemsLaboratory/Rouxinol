#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <limits>
#include <cmath>
#include <numeric>
#include <string>

using namespace std;

using ll = long long int;
using ull = unsigned long long int;
#define rep(i, a, b) for(int i = (a); i < (b); ++i )
#define rrep(i, a, b) for(int i = (a); i > (b); --i )
#define REP(i, a, b) for(int i = (a); i <= (b); ++i )
#define RREP(i, a, b) for(int i = (a); i >= (b); --i )
#define llrep(i, a, b) for(ll i = (a); i < (b); ++i )
#define llrrep(i, a, b) for(ll i = (a); i > (b); --i )
#define llREP(i, a, b) for(ll i = (a); i <= (b); ++i )
#define llRREP(i, a, b) for(ll i = (a); i >= (b); --i )
#define ullrep(i, a, b) for(ull i = (a); i < (b); ++i )
#define ullrrep(i, a, b) for(ull i = (a); i > (b); --i )
#define ullREP(i, a, b) for(ull i = (a); i <= (b); ++i )
#define ullRREP(i, a, b) for(ull i = (a); i >= (b); --i )


int N, Q;

class UnionFind {
public:
    UnionFind(unsigned long long n) : rank_(n, 0), p_(n, 0) {
        rep(i, 0, n) {
            MakeSet(i);
        }
    }

    void MakeSet(int x) {
        p_[x] = x;
        rank_[x] = 0;
    }

    bool Same(int x, int y) {
        return FindSet(x) == FindSet(y);
    }

    void Link(int x, int y) {
        if (rank_[x] > rank_[y]) {
            p_[y] = x;
        } else {
            p_[x] = y;
            if (rank_[x] == rank_[y]) {
                rank_[y]++;
            }
        }
    }

    void Unite(int x, int y) {
        Link(FindSet(x), FindSet(y));
    }

    int FindSet(int x) {
        if (x != p_[x]) {
            p_[x] = FindSet(p_[x]);
        }
        return p_[x];
    }

private:
    std::vector<int> rank_, p_;
};


int main() {
    cin >> N >> Q;
    UnionFind UF(N);
    rep(i, 0, Q) {
        int com, x, y;
        cin >> com >> x >> y;
        switch (com) {
            case 0:
                UF.Unite(x, y);
                break;
            case 1:
                if (UF.Same(x, y)) {
                    cout << 1 << endl;
                }else{
                    cout << 0 << endl;
                }
                break;
        }
    }
}
