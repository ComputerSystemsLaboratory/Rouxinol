#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

int w, h;
char c[51][51];
bool f[51][51];
int ans = 0;


bool contain(int y, int x){
    return (0 <= y && y < h && 0 <= x && x < w);
}

void dfs(int y, int x){
    f[y][x] = true;
    if(c[y][x] == '0') return;
    rep(i, 0, 3){
        rep(j, 0, 3){
            int ny = y + i - 1;
            int nx = x + j - 1;
            if(contain(ny, nx) && f[ny][nx] == false){
                dfs(ny, nx);
            }
        }
    }
    return;
}

signed main(){
    while(cin >> w >> h){
        if(w + h == 0) break;
        rep(i, 0, h){
            rep(j, 0, w){
                cin >> c[i][j];
            }
        }
        rep(i, 0 ,51){
            rep(j, 0, 51){
                f[i][j] = false;
            }
        }
        // cout << -1 << endl;
        ans = 0;
        rep(i, 0, h){
            rep(j, 0 ,w){
                if(c[i][j] == '1' && f[i][j] == false){
                    // cout << i << ' ' << j << endl;
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

}