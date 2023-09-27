#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s1, s2;
  int s, t;
  int a[1001][1001];
  int cost;
  cin >> s1;
  cin >> s2;
  s = s1.length();
  t = s2.length();

  rep(j, t+1){
    a[0][j] = j;
  }

  rep(i, s+1){
    a[i][0] = i;
  }


  rep(i, s){
    rep(j, t){
      if(s1[i] == s2[j]){
        cost = 0;
      }else{
        cost = 1;
      }

      a[i+1][j+1] = min(a[i][j+1] + 1, min(a[i+1][j] + 1, a[i][j] + cost));
      // cout << a[i+1][j+1] << " " << i + 1 << " " << j + 1 << endl;
    }
  }

  cout << a[s][t] << endl;


}
