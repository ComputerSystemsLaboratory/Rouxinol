#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> PII;
int main(){
  int n, m;
  while(true){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }
    vector<PII> pd(n);
    int ans = 0;
    for(int i = 0; i < n; ++i){
      int a, b;
      cin >> a >> b;
      pd[i] = make_pair(b, a);
      ans += b * a;
    }
    sort(pd.begin(), pd.end(), greater<PII>());
    /*
    for(int i = 0; i < n; ++i){
      cout << pd[i].first << " " << pd[i].second << endl;
    }
    */
    for(int i = 0; i < n && m != 0; ++i){
      if(m >= pd[i].second){
	ans -= pd[i].first * pd[i].second;
	m -= pd[i].second;
      }
      else if(pd[i].second > m){
	ans -= pd[i].first * m;
	m = 0;
      }
    }
    cout << ans << endl;
  }
  return 0;
}