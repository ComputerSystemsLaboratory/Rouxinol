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

int N, Q;

int G[100][100];
int d[100];
int p[100];
int c[100];

int main() {
    cin >> N;
    rep(i, 0, N) {
        rep(j, 0, N) {
            G[i][j] = 10000010;
        }
    }
    rep(i, 0, N) {
        int u, k;
        cin >> u >> k;
        rep(j, 0, k) {
            int t, d;
            cin >> t >> d;
            G[u][t] = d;
        }
    }
    rep(i, 0, N) {
        d[i] = numeric_limits<int>::max();
    }

    d[0] = 0;
    p[0] = 0;
    while (true) {
        int m = -1;
        int min_d = numeric_limits<int>::max();
        rep(i, 0, N) {
            if ((c[i] == 0) && (min_d > d[i])) {
                min_d = d[i];
                m = i;
            }
        }
        if (m < 0) {
            break;
        }
        c[m] = 1;
        rep(i, 0, N) {
            if ((d[m] + G[m][i]) < d[i]) {
                d[i] = d[m] + G[m][i];
                p[i] = m;
            }
        }
    }
    rep(i, 0, N) {
        cout << i << " " << d[i] << endl;
    }
}


