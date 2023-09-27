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
  int n;
  vector<int> v;
  cin >> n;
  cout << n << ": ";
  for(int i=2; i*i<=n; i++) {
    while(n%i==0) {
      v.push_back(i);
      n/=i;
    }
  }
  if(n>1) {
    v.push_back(n);
  }
  for(int i=0; i<v.size()-1; i++) {
    cout << v[i] << " ";
  }
  cout << v[v.size()-1] << endl;
}
