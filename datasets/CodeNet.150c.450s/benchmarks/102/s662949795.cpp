#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main()
{
    int w,h;
    while(cin >> w >> h)
    {
        if(w == 0 && h == 0) break;

        vector<string> s(h);
        rep(i,h) cin >> s[i];

        int sy,sx;
        rep(i,h) {
            rep(j,w) {
                if(s[i][j] == '@') {
                    sy = i;
                    sx = j;
                }
            }
        }
        
        int ans = 1;
        bool memo[25][25];
        memset(memo,0,sizeof(memo));

        queue<pair<int,int> > que;
        que.push(make_pair(sy,sx));
        memo[sy][sx] = true;
        
        while(que.size()) {
            pair<int,int> p = que.front();
            que.pop();
            
            rep(i,4) {
                int ny = p.first + dy[i];
                int nx = p.second + dx[i];

                if(0 <= ny && ny < h && 0 <= nx && nx < w) {
                    if(s[ny][nx] == '.' && !memo[ny][nx]) {
                        ans++;
                        memo[ny][nx] = true;
                        que.push(make_pair(ny,nx));
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}