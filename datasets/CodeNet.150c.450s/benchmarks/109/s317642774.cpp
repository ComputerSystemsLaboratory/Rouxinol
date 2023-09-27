//   _/                _/                 _/_/_/   _/
//_/_/_/_/   _/_/   _/_/_/_/   _/_/    _/       _/_/
// _/     _/    _/   _/     _/    _/  _/_/_/     _/
//_/     _/    _/   _/     _/    _/  _/    _/   _/
// _/_/   _/_/       _/_/   _/_/      _/_/     _/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
const double pi=3.14159265358979323846;
const int inf=2e9;
const ll INF=9e18;
typedef pair<int,int> P;
int main() {
  cin.tie(0),cout.tie(0);
  ios::sync_with_stdio(false);
  while(true) {
    int n,ans=0;
    cin >> n;
    if(n==0) {
      return 0;
    }
    string s,g;
    int t[86500]={};
    for(int i=0; i<n; i++) {
      int x,y;
      cin >> s >> g;
      x=(stoi(s.substr(0,2)))*3600+(stoi(s.substr(3,2)))*60+stoi(s.substr(6,2));
      y=(stoi(g.substr(0,2)))*3600+(stoi(g.substr(3,2)))*60+stoi(g.substr(6,2));
      x++,y++;
      t[x]++,t[y]--;
    }
    for(int i=1; i<=86450; i++) {
      t[i]+=t[i-1];
      ans=max(ans,t[i]);
    }
    cout << ans << endl;
  }
}
