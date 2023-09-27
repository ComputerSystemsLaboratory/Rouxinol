#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n, m, l;
    cin >> n >> m >> l;
    int a[110][110], b[110][110];
    rep(i, 0, n) rep(j, 0, m) cin >> a[i][j];
    rep(i, 0, m) rep(j, 0, l) cin >> b[i][j];
    int c[110][110] = {};
    rep(i, 0, n){
        rep(j, 0, l){
            rep(k, 0, m){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    rep(i, 0, n){
        rep(j, 0, l){
            cout << c[i][j];
            if(j != l - 1) cout << " ";
        }
        cout << endl;
    }
}