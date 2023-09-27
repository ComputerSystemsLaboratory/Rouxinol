#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long ll;
typedef pair<int, int> pair;
const int inf = 1000000000; //10^9
const ll inff = 1000000000000000000; //10^18

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    ll a[n][m];
    ll b[m][l];
    ll c[n][l];
    rep(i, n) {
        rep(j, m) {
            cin >> a[i][j];
        }
    }
    rep(i, m) {
        rep(j, l) {
            cin >> b[i][j];
        }
    }
    rep(i, n) {
        rep(j, l) {
            c[i][j] = 0;
        } 
    }
    rep(i, n) {
        rep(j, l) {
            rep(k, m) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    rep(i, n) {
        rep(j, l) {
            if (j == l-1) cout << c[i][j] << endl;
            else cout << c[i][j] << ' ';
        }
    }
    return 0;
}
