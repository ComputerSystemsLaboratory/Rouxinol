#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

const int MAX_H = 11;
int a[MAX_H][5];
int H;
int ans;

void init() {
    ans = 0;
    rep(i, H) {
        rep(j, 5) {
            cin >> a[i][j];
        }
    }
}

bool erase() {
    bool erased = false;
    rep(i, H) {
        rep(l, 5) {
            if (a[i][l] == 0) continue;
            int r = l;
            while (r < 5 && a[i][r] == a[i][l]) {
                r++;
            }
            if (r - l >= 3) {
                // erase
                rep2(j, l, r) {
                    ans += a[i][j];
                    a[i][j] = 0;
                }
                erased = true;
            }
        }
    }

    return erased;
}

void drop() {
    for (int i = H - 1; i >= 1; i--) {
        rep(j, 5) {
            if (a[i][j] == 0) {
                for (int i2 = i - 1; i2 >= 0; i2--) {
                    if (a[i2][j] != 0) {
                        a[i][j] = a[i2][j];
                        a[i2][j] = 0;
                        break;
                    }
                }
            }
        }
    }
}

bool step() {
    if (!erase()) return false;
    drop();
    return true;
}


signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while (cin >> H, H) {
        init();
        while (step());
        cout << ans << endl;
    }
}