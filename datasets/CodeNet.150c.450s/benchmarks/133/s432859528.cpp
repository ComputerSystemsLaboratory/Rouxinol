#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <climits>
#include <iomanip>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  ll d = 0;
  cin >> d;
  vector<ll> c(26);
  for(int i = 0;i < 26;i++){
    cin >> c[i];
  }
  vector<vector<ll>> s(d,vector<ll>(26));
  for(int i = 0;i < d;i++){
    for(int j = 0;j < 26;j++){
      cin >> s[i][j];
    }
  }
  vector<ll> last(26);
  for(int i = 0;i < 26;i++)last[i] = -1;
  ll res = 0;
  for(int i = 0;i < d;i++){
    ll nowin = 0;
    cin >> nowin;
    nowin--;
    last[nowin] = i;
    res += s[i][nowin];
    for(int j = 0;j < 26;j++){
      res -= c[j] * (i - last[j]);
    }
    cout << res << endl;
  }
}