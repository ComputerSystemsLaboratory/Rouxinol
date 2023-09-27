#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
using ll = long long;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
    int n;
    while (cin >> n, n) {
        int x[n], y[n];
        x[0] = y[0] = 0;
        rep(i, n-1) {
            int a, b;
            cin >> a >> b;
            x[i+1] = x[a] + dx[b];
            y[i+1] = y[a] + dy[b];
        }
        int xma=0, xmi=1e8, yma=0, ymi=1e8;
        rep(i, n) {
            xma=max(xma, x[i]);
            xmi=min(xmi, x[i]);
            yma=max(yma, y[i]);
            ymi=min(ymi, y[i]);
        }
        cout << xma-xmi+1 << " " << yma-ymi+1 << endl;
    }
}