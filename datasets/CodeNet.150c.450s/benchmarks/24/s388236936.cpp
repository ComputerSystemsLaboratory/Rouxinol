#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
pair<int, int> pd[10010];

int main(){
  while(cin >> n >> m && n){
    int d, p;
    for(int i = 0 ; i < n ; i++){
      cin >> d >> p;
      pd[i] = make_pair(p, d);
    }
    sort(pd, pd+n, greater<pair<int, int> >());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      if (m >= pd[i].second) {
	m -= pd[i].second;
	pd[i].second = 0;
      }
      else {
	pd[i].second -= m;
	break;
      }
    }
    for(int i = 0 ; i < n ;i++){
      ans += pd[i].first * (pd[i].second);
    }
    cout << ans << '\n';
  }
}