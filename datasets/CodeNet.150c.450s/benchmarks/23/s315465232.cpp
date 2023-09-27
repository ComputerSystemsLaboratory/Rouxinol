#include <bits/stdc++.h>

#define REP(i ,n) for(int i=0 ;i < n; i++)
#define REPB(i ,n) for(int i=n; i >= 0; i--)
#define FOR(i ,m ,n) for(int i=m; i < n; i++)
#define FORB(i, m, n) for(int i=m; i>= m; i--)
#define ll long long
#define pb push_back
#define popb pop_back
using namespace std;
vector<int> f;
int makeFib(int k){
    f.pb(1);
    f.pb(1);
    if(k >= 2){
    FOR(i,2,(k + 1)){
        f.pb(f[i - 2] + f[i - 1]);
      }
    }
      return f[k];
  }
int main(){
  int n;
  cin >> n;

  cout << makeFib(n) << endl;
}
