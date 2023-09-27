#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int w,h;
int dx[8] = { 1, 1, 1, 0,-1,-1,-1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0,-1,-1};

bool memo[55][55];
int d[55][55];

bool can(int y,int x) {
    if(0 <= y && y < h && 0 <= x && x < w) return true;
    return false;
}

void dfs(int y,int x) {
    if(memo[y][x]) return;
    memo[y][x] = true;
    
    rep(i,8) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(can(ny,nx) && d[ny][nx] == 1) {
            dfs(ny,nx);
        }
    }
}


int main()
{
    while(cin >> w >> h)
    {
        if(w == 0 && h == 0) break;
        
        memset(d,0,sizeof(d));
        memset(memo,0,sizeof(memo));

        rep(i,h) {
            rep(j,w) {
                cin >> d[i][j];
            }
        }
        
        int ans = 0;
        rep(i,h) {
            rep(j,w) {
                if(!memo[i][j] && d[i][j] == 1) {
                    ans++;
                    dfs(i,j);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}