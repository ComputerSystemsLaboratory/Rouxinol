#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 1e9 + 7;
using pii = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
const int mod = 1e9 + 7;
ll power(ll a,ll b){return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;}

int main() {
    int n;
    while (cin >> n && n) {
        vector<int> v[5];
        rep(i, n) rep(j, 5) {int p; cin >> p; v[j].push_back(p);}
        int flg = 0;
        int sum = 0;
        //cout << endl; rep(i, n) {rep(j, 5) cout << v[j][i] << " "; cout << endl;}
        while (1) {
            flg = 0;
            rep(i, n) { //まず全部の0
                rrep(j, 1, 5) { //start point
                    //cout << i << " " << j << endl;
                    if (v[j][i] == 0) continue;
                    int c = 1;
                    int k = j;
                    vector<int> vv;
                    vv.push_back(k - 1);
                    while (v[k][i] == v[k - 1][i]) {c++; vv.push_back(k); k++; if (k == 5) break;}
                    //cout << c << endl;
                    if (c >= 3) {
                        flg = 1;
                        sum += v[j][i] * c;
                        //cout << v[j][i] << " " << c << endl;
                        rep(l, vv.size()) {
                            v[vv[l]][i] = 0;
                        }
                    }
                }
            }
            if (n == 1) {cout << sum << endl; flg = 0; break;}
            //cout << endl; rep(i, n) {rep(j, 5) cout << v[j][i] << " "; cout << endl;}
            //slide phase
            rep(i, n) {
                rep(j, 5) {
                    if (v[j][i] == 0) {
                        for (int k = i; k >= 1; k--) {
                            v[j][k] = v[j][k - 1];
                        }
                        v[j][0] = 0;
                    }
                }
            }
            //cout << endl; rep(i, n) {rep(j, 5) cout << v[j][i] << " "; cout << endl;}
            if (flg == 0) break;
        }
        if (n != 1) cout << sum << endl;
    }
}

