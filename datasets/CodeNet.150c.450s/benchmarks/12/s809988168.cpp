#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
const long long INFLL = 1LL << 60;
const int INFINT = 1 << 30;
const long long MOD = 1e9 + 7;

template <class T> void vecout(T V) {
    auto t = V.begin();
    while(t != V.end()) {
        cout << *t++;
        if(t != V.end()) cout << " ";
    }
    cout << endl;
};

int main() {
    int n, pk, lk, rk;
    cin >> n;
    vector<int> Heap(n + 1);
    rep(i, 1, n + 1) cin >> Heap[i];

    rep(i, 1, n + 1) {
        pk = i / 2, lk = 2 * i, rk = 2 * i + 1;

        cout << "node " << i << ": key = " << Heap.at(i);
        if(pk) cout << ", parent key = " << Heap.at(pk);
        if(lk <= n) cout << ", left key = " << Heap.at(lk);
        if(rk <= n) cout << ", right key = " << Heap.at(rk);
        cout << ", \n";
    }
}

