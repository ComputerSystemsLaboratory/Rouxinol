#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> P;

int main(){
  int n, m;

  while(cin >> n >> m, n || m){
    vector<P> v;

    for(int i = 0; i < n; i++){
      int d, p;
      cin >> d >> p;
      v.push_back(P(p, d));
    }
    sort(v.begin(), v.end());

    int ans = 0;

    for(int i = v.size() - 1; i >= 0; i--){
      if(m <= 0){
        ans += v[i].first * v[i].second;
      }
      else if(m >= v[i].second){
        m -= v[i].second;
      }
      else{
        ans += v[i].first * (v[i].second - m);
        m = 0;
      }
    }

    cout << ans << endl;
  }
}