#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(void){
  while(true){
    int n, m;
    cin >> n >> m;
    if(n == 0 && m == 0){ break; }

    int d, p;
    long long int ans = 0;
    vector<pair<int, int> > princess;
    for(int i = 0; i < n; i++){
      cin >> d >> p;
      princess.push_back(make_pair(p, d));
      ans += d * p;
    }
    sort(princess.begin(), princess.end());
    reverse(princess.begin(), princess.end());

    for(int i = 0; i < n; i++){
      int hire = min(m, princess[i].second);
      m -= hire;
      ans -= hire * princess[i].first;
    }
    
    cout << ans << endl;
  }
  
  return 0;
}