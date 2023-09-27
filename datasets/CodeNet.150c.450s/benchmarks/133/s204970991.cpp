# include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;

int main(){
  int D;
  int c[30];
  int s[400][30];
  int type[400];
  int last[400][30];
  cin >> D;
  rep(i,1,27) cin >> c[i];
  rep(i,1,D+1){
    rep(j,1,27){
      cin >> s[i][j];
      last[i][j]=0;
    }
  }
  rep(j,1,D+1) cin >> type[j];

  ll satis_level[400];
  rep(i,0,400) satis_level[i] = 0;
  vector<int> res;
  
  ll down_satis;
  rep(i,1,D+1){
    down_satis=0;
    rep(k,1,400) last[k][type[i]] = i;
    satis_level[i] += s[i][type[i]];
    rep(j,1,27) down_satis += c[j]*(i-last[i][j]);
    satis_level[i] -= down_satis;
    satis_level[i+1] += satis_level[i];
  }
  
  rep(i,1,D+1) cout << satis_level[i] << '\n'; //B答えのコード
  //for(auto r:res) cout << r << '\n'; //A答えのコード
  return 0;
}