#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 1e15;
const int MOD = 1e9+7;

void solve(int h){
    vector<vector<int>> a(h, vector<int>(5));
    for(int i = h-1; i >= 0; i--){
        rep(j, 5){
            cin >> a[i][j];
        }
    }

    bool able = true;

    int ans = 0;
    while(able){
        able = false;

        vector<vector<bool>> del(h, vector<bool>(5, false));

        rep(i, h){
            rep(j, 3){
                if(a[i][j] == 0){
                    continue;
                }

                if(a[i][j] == a[i][j+1] && a[i][j] == a[i][j+2]){
                    able = true;
                    del[i][j] = true;
                    del[i][j+1] = true;
                    del[i][j+2] = true;
                }
            }
        }

        rep(i, h){
            rep(j, 5){
                if(del[i][j]){
                    ans += a[i][j];
                    a[i][j] = 0;
                }
            }
        }

        for(int i = 1; i < h; i++){
            rep(j, 5){
                int ni = i-1;
                while(ni >= 0 && a[ni][j] == 0){
                    a[ni][j] = a[ni+1][j];
                    a[ni+1][j] = 0;
                    ni--;
                }
            }
        }
    }
    cout << ans << endl;
}

signed main(){
    while(true){
        int h;
        cin >> h;

        if(h == 0){
            break;
        }

        solve(h);
    }

    return 0;
}

