#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

struct UnionFind {
        int n;
        vector<int> parent;
        vector<int> rank;
        vector<int> num;
        int find(int x) {
                if (parent[x] == x) return  x;
                return parent[x] = find(parent[x]);
        }
        UnionFind(int n_) {
                n = n_;
                parent.resize(n);
                for (int i = 0; i < n; i ++) parent[i] = i;
                rank.assign(n, 0);
                num.assign(n, 1);
        }
        void unite(int x, int y) {
                if ((x = find(x)) != (y = find(y))) {
                        if (rank[x] < rank[y]) {
                                parent[x] = y;
                                num[y] += num[x];
                        } else {
                                parent[y] = x;
                                if (rank[x] == rank[y]) rank[x] ++;
                                num[x] += num[y];
                        }
                        n --;
                }
        }
        bool same(int x, int y) { return find(x) == find(y); }
        int get() { return n; }
        int get(int x) { return num[find(x)]; }
};

int main() {
        int w, h;
        while (scanf("%d%d", &w, &h), w) {
                vector<vector<int>> s(h, vector<int> (w));
                int lands = 0;
                map<pair<int, int>, int> ptol;
                for (int i = 0; i < h; i ++) {
                        for (int j = 0; j < w; j ++){
                                scanf("%d", &s[i][j]);
                                if (s[i][j]) {
                                        ptol[make_pair(i, j)] = lands;
                                        lands ++;
                                }
                        }
                }
                UnionFind uf(lands);
                for (int i = 0; i < h; i ++) {
                        for (int j = 0; j < w; j ++) {
                                if (s[i][j]) {
                                        if (i - 1 >= 0 && j + 1 < w && s[i - 1][j + 1]) uf.unite(ptol[make_pair(i, j)], ptol[make_pair(i - 1, j + 1)]);
                                        if (j + 1 < w && s[i][j + 1]) uf.unite(ptol[make_pair(i, j)], ptol[make_pair(i, j + 1)]);
                                        if (i + 1 < h && j + 1 < w && s[i + 1][j + 1]) uf.unite(ptol[make_pair(i, j)], ptol[make_pair(i + 1, j + 1)]);
                                        if (i + 1 < h && s[i + 1][j]) uf.unite(ptol[make_pair(i, j)], ptol[make_pair(i + 1, j)]);
                                }
                        }
                }
                printf("%d\n", uf.get());
        }
        return 0;
}