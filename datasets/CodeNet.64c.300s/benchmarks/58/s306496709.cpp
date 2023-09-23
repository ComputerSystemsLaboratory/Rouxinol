#include <iostream>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};

int n, m;
char x[100][101];

void dfs(int i, int j){
  char c = x[i][j];
  x[i][j] = 0;
  rep(k, 4){
    int p = i + dx[k];
    int q = j + dy[k];
    if(0 <= p && p < n && 0 <= q && q < m && x[p][q] == c){
      dfs(p, q);
    }
  }
}

int main(){
  while(1){
    cin >> n >> m;
    if(!n){
      break;
    }
    rep(i, n){
      cin >> x[i];
    }
    int ans = 0;
    rep(i, n){
      rep(j, m){
        if(x[i][j]){
          dfs(i, j);
          ++ans;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}