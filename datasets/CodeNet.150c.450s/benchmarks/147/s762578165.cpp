#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,s,n) for(int i = s; i < n; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using Graph = vector<vector<int>>;
ll ans[1000000];
int main(){
  int n;
  cin >> n;
  REP(x,1,101)REP(y,1,101)REP(z,1,101){
    ll tmp = x * x + y * y + z * z + x * y + y * z + z * x;
    if(tmp > n)continue;
    ans[tmp]++;
  }
  REP(i,1,n + 1)cout << ans[i] << endl;
  return 0;
}
