#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;
        int in[a]; rep(i, a) cin >> in[i];
        int table[a - 1]; rep(i, a - 1) table[i] = in[i] - in[i + 1];
        //rep(i, a - 1) cout << table[i] << " "; cout << endl;
        int ans = 0, num = 0;
        rrep(i, b - 1, c) {
            if (table[i] == 0) continue;
            if (table[i] >= ans) {
                ans = table[i];
                num = i;
            }
        }
        cout << num + 1 << endl;
    }
}

