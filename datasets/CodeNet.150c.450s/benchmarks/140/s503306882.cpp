#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int V, E;
struct pqdata {
    int from; int to; int cost;
    bool operator<(const pqdata &r) const { return cost > r.cost; }
};

// UnionFindの実装
struct UnionFind {
    vector<int> data;
    UnionFind(int size) : data(size, -1) { }

    // 集合をマージする
    // すでに同じ集合ならfalseが返る
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if(x == y) return false;
        //要素数の少ない方を多い方に繋げる
        if(data.at(y) < data.at(x)) swap(x, y);
        data.at(x) += data.at(y);
        data.at(y) = x;
        return true;
    }

    // ある要素がどの集合に属しているかを答える
    int root(int x) {
        // 根に直接つなぎ直す
        return data.at(x) < 0 ? x : (data.at(x) = root(data.at(x)));
    }

    // ある集合の大きさを答える
    int size(int x) {
        return -data.at(root(x));
    }

    bool same(int x, int y) {
        x = root(x); y = root(y);
        return x == y;
    }
};

int main() {
    cin >> V >> E;
    priority_queue<pqdata> pque;
    UnionFind tree(V);
    for(int i = 0; i < E; ++i) {
        int s, t, w;
        cin >> s >> t >> w;
        pqdata indata;
        indata.from = s; indata.to = t; indata.cost = w;
        pque.push(indata);
    }

    int sum = 0;
    while(!pque.empty()) {
        pqdata now = pque.top();
        pque.pop();
        if(!tree.same(now.from, now.to)) {
            sum += now.cost;
            tree.merge(now.from, now.to);
        }
    }

    cout << sum << endl;
}
