#include <array>
#include <vector>
#include <iostream>
using namespace std;

const int NM_MAX = 1500;
const int WH_MAX = 1000;
const int PT_MAX = NM_MAX * WH_MAX;

// 一方の端を 0 に正規化し、
// もう一方の長さの先の点を数える
array<int, PT_MAX> nw, nh;

void normalize(const vector<int>& d, array<int, PT_MAX>& n) {
    n.fill(0);
    for (int i = 0; i < d.size(); i++) {
        int s = 0;
        for (int j = i; j >= 0; j--) {
            s += d[j];
            n[s]++;
        }
    }
}

int main() {
    int n, m;
    while (cin >> n >> m, n || m) {
        vector<int> dw(n), dh(m);
        for (int& x : dw) cin >> x;
        for (int& x : dh) cin >> x;
        normalize(dw, nw);
        normalize(dh, nh);
        int cnt = 0;
        for (int i = 0; i < PT_MAX; i++) cnt += nw[i] * nh[i];
        cout << cnt << endl;
    }
    return 0;
}