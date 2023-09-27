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

int main() {
    int n, m;
    while (cin >> n >> m, n || m) {
        vector<int> dw(n), dh(m);
        for (int& x : dw) cin >> x;
        for (int& x : dh) cin >> x;
        nh.fill(0);
        nw.fill(0);
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = i; j >= 0; j--) {
                s += dw[j];
                nw[s]++;
            }
        }
        for (int i = 0; i < m; i++) {
            int s = 0;
            for (int j = i; j >= 0; j--) {
                s += dh[j];
                nh[s]++;
            }
        }
        int cnt = 0;
        for (int i = 0; i < NM_MAX * WH_MAX; i++) {
            cnt += nw[i] * nh[i];
        }
        cout << cnt << endl;
    }
    return 0;
}