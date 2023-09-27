#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i< (n); i++)
using namespace std;

int main(){  
  int D;
  cin >> D;

  vector<int> c(26);
  rep(i,26){
    cin >> c[i];
  }

  vector<vector<int>> s (D,vector<int>(26));
  rep(d, D){
    rep(i,26){
      cin >> s[d][i];
    }
  }

  vector<int> t(D);
  rep(i,D){
    cin >> t[i];
    t[i] -=1;
  }

  vector<int> last(26);
  vector<int> v(D);
  int sat =0;

  rep(d, D){
    last[t[d]] = d+1;

    int desc=0;
    rep(i, 26){
      desc += c[i]*(d+1-last[i]);
    }
    //cout <<s[d][t[d]]<<endl;
    //cout << desc << endl;

    if(d==0){
      v[d] = s[d][t[d]] - desc;
    }else{
      v[d] = v[d-1] + s[d][t[d]] - desc;
    }

    cout << v[d] <<endl;

  }
  return 0;
}