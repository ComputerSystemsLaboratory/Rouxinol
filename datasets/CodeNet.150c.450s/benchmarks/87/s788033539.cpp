#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    while (true) {
        int h; cin >> h;
        if(!h) break;

        vector<string> a(h);
        rep(i, h) {
            string tmp;
            rep(j, 5) {
                char x; cin >> x;
                tmp += x;
            }
            a[i] = tmp;
        }

        int ans = 0;
        bool fin = false;
        while (!fin) {
            fin = true;
            rep(i, h) {
                string row = a[h-i-1];
                FOR(num, 1, 10) {
                    if (count(all(row), num+'0')==5) {
                        ans += (num)*5;
                        fin = false;
                        rep(j, 5) a[h-i-1][j] = 'x';
                    } else if (count(all(row), num+'0')==4) {
                        bool found = false;
                        rep(j, 2) {
                            if (row[j+0]==row[j+1] && row[j+1]==row[j+2] && row[j+2]==row[j+3]) {
                                ans += num*4;
                                fin = false;
                                found = true;
                                rep(k, 4) a[h-i-1][j+k] = 'x';
                            }
                        }
                        if (!found) {
                            rep(j, 3) {
                                if (row[j+0]==row[j+1] && row[j+1]==row[j+2]) {
                                    ans += num*3;
                                    fin = false;
                                    rep(k, 3) a[h-i-1][j+k] = 'x';
                                }
                            }
                        }
                    } else if (count(all(row), num+'0')==3) {
                        rep(j, 3) {
                            if (row[j+0]==row[j+1] && row[j+1]==row[j+2]) {
                                ans += num*3;
                                fin = false;
                                rep(k, 3) a[h-i-1][j+k] = 'x';
                            }
                        }
                    }
                }
            }
            if (!fin) {
                rep(_, h) {
                    for(int i=h-1;i>0;i--) rep(j, 5) {
                        if (a[i][j]=='x' && a[i-1][j]!='x') swap(a[i][j], a[i-1][j]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
