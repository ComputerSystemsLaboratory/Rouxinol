#include <algorithm>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map> //pair is also included in this library
#include <stack>
#include <string>
#include <vector>

#define REP(i, s, n) for(int i = (int)(s); i < (int)(n); i++)

using namespace std;

typedef long long int ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef pair<int, int> PII;

//prefer define statement
//for reason that const int ver. of INF will raise a silly warning (unused variable)
#define INF (INT_MAX/3)
//const int INF = INT_MAX/3;

/*------------------------------------------------------------------------------*/

void dfs(char c, pair<int, int> cur, vector<vector<char>> &p, int H, int W){
  int x[4] = {-1, 0, 1, 0};
  int y[4] = {0, -1, 0, 1};
  p[cur.first][cur.second] = '.';

  REP(i, 0, 4){
    int nx = cur.second + x[i];
    int ny = cur.first + y[i];
    if(nx >= 0 && nx < W && ny >= 0 && ny < H && c == p[ny][nx]){
      dfs(c, {ny, nx}, p, H, W);
    }
  }
  return;
}

int solve(int H, int W, vector<vector<char>> p){
  int ans = 0;
  char c = '.';

  REP(i, 0, H){
    REP(j, 0, W){
      if('.' != p[i][j]){
        ans++;
        c = p[i][j];
        dfs(c, {i, j}, p, H, W);
      }
    }
  }
  return ans;
}

int main(){
  int H, W;
  while(1){
    cin >> H >> W;
    if(H == 0 && W == 0){
      break;
    }
    vector<vector<char>> p(H, vector<char>(W));
    REP(i, 0, H){
      REP(j, 0, W){
        cin >> p[i][j];
      }
    }
    int ans = solve(H, W, p);
    cout << ans << endl;
  }

  return 0;
}