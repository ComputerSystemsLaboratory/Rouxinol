#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long int ll;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll st=0;
  int ans,date;
  vector<int> c(26),l(26,0);
  vector<vector<int>> s(date,vector<int>(26));
  cin >> date;
  rep(i,26) cin >> c.at(i);
  rep(i,date) {
    rep(j,26){
      cin >> s.at(i).at(j);
    }
  }
  rep(i,date) {
    cin >>ans;
    l[ans-1]=i+1;
    st+=s[i][ans-1];
    rep(j,26)st-=c[j]*(i+1-l[j]);
    cout <<st<<endl;
  }
}