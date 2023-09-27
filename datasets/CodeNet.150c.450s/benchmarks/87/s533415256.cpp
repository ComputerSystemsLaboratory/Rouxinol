#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;


signed main(){
    int n;
    while(cin >> n, n){
        int d[10][6] = {0};
        rep(i, 0, n){
            rep(j, 0, 5){
                cin >> d[i][j];
            }
        }
        
        int ans = 0;
        bool f = true;
        while(f){
            f = false;
            rep(i, 0, n){
                rep(j, 0, 5){
                    int cnt = 1;
                    int now = d[i][j];
                    if(d[i][j] <= 0) continue;
                    rep(k, j + 1, 6){
                        if(d[i][j] == d[i][k]) cnt++;
                        else break;
                    }
                    if(cnt < 3) continue;
                    rep(k, j, j + cnt){
                        d[i][k] = -1;
                    }
                    // rep(k, 0, 6){
                    //     cout << d[i][k] << ' ';
                    // }
                    // cout << endl;
                    // cout << d[i][j] << ' ' << cnt << endl;
                    ans += now * cnt;
                    f = true;
                    j += cnt - 1;
                }
            }
            repb(i, n - 1, 0){
                rep(j, 0, 5){
                    if(d[i][j] != -1) continue;
                    if(i == 0) continue;
                    repb(k, i - 1, 0){
                        if(d[k][j] != -1){
                            swap(d[k][j], d[i][j]);
                            break;
                        }
                    }
                }
            }
            // rep(i, 0, n){
            //     rep(j, 0, 6) cout << d[i][j] << ' ';
            //     cout << endl;
            // }
        }
        cout << ans << endl;
    }
}