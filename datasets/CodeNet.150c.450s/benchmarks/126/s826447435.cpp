#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)

const int dx[] = {1, 0};
const int dy[] = {0, 1};
int a, b;
int n;
int x, y;
bool maze[22][22];

inline bool check(int hx, int hy){ return 0 <= hx && hx < a && 0 <= hy && hy < b; }

int main()
{
  while(cin >> a >> b, a){
    rep(i, a) rep(j, b) maze[i][j] = false;
    cin >> n;
    rep(i, n){
      cin >> x >> y;
      maze[x - 1][y - 1] = true;
    }

    int res = 0;
    queue<pair<int, int> > que;
    que.push(make_pair(0, 0));
    while(!que.empty()){
      pair<int, int> top = que.front();  que.pop();
      int hx = top.first;
      int hy = top.second;
      if(hx == a - 1 && hy == b - 1){
        res += 1;
        continue;
      }
      rep(k, 2){
        int nx = hx + dx[k];
        int ny = hy + dy[k];
        if(!check(nx, ny)) continue;
        if(maze[nx][ny]) continue;
        que.push(make_pair(nx, ny));
      }
    }

    cout << res << endl;
  }

  return 0;
}