#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h;
    while(1){
        cin >> h;
        if(h == 0) break;
        int d[11][5];
        rep(i, 0, h){
            rep(j, 0, 5){
                cin >> d[i][j];
            }
        }
        int ans = 0;
        while(1){
            bool f = false;
            rep(i, 0, h){
                rep(j, 0, 3){
                    bool g = true;
                    rep(k, j, j + 3){
                        if(d[i][k] == -1 || d[i][k] != d[i][j]) g = false;
                    }
                    if(g){
                        int tmp = d[i][j];
                        rep(k, j, 5){
                            if(d[i][k] == tmp){
                                d[i][k] = -1; ans += tmp;
                            }else{
                                break;
                            }
                        }
                        f = true;
                        break;
                    }
                }
            }
            if(f == false) break;
            rep(j, 0, 5){
                repb(i, h - 1, 0){
                    if(d[i][j] != -1) continue;
                    repb(k, i - 1, 0){
                        if(d[k][j] != -1){
                            swap(d[k][j], d[i][j]);
                            break;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }   
}
