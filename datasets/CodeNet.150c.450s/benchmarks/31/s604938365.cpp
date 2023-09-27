#include <bits/stdc++.h>

#define REP(i ,n) for(int i=0 ;i < n; i++)
#define REPB(i ,n) for(int i=n; i >= 0; i--)
#define FOR(i ,m ,n) for(int i=m; i < n; i++)
#define FORB(i, m, n) for(int i=m; i>= m; i--)
#define ll long long
#define pb push_back
#define popb pop_back
using namespace std;

int main(){
  int n,rt;
  vector<int> r;
  cin >> n;
  REP(c, n){
      cin >> rt;
      r.pb(rt);
    }
    int maxi = -2000000000;
    int mini = r[0];
    FOR(i,1, n){
        maxi = max(maxi, r[i] -mini);
        mini = min(mini, r[i]);
      }
      cout << maxi << endl;
}

