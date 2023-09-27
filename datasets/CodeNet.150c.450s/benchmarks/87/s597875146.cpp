#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < int(n) ;++i)
int n;

int in[100][5];
int ans;

void solve(){
  rep(i, n) rep(j, 5) cin >> in[n - i - 1][j];
  ans = 0;
  while(true){
    bool end = true;
    rep(i, n){
      rep(j, 5){
        if(in[i][j] == 0) continue;
        int k = j;
        while(k < 5){
          if(in[i][j] == in[i][k]) ++k;
          else break;
        }
        if(k - j >= 3){
          end = false;
          ans += (k - j) * in[i][j];
          for(int l = j; l < k; ++l)
            in[i][l] = 0;
        }
      }
    }
    if(end) break;
    while(true){
      bool end = true;
      for(int i = 0; i + 1 < n; ++i){
        rep(j, 5){
          if(in[i][j]) continue;
          if(in[i + 1][j]){
            end = false;
            swap(in[i + 1][j], in[i][j]);
          }
        }
      }
      if(end) break;
    }
  }
  
  cout << ans << endl;
}

int main(int argc, char *argv[])
{

  while(cin >> n && n) solve();
  return 0;
}