#include<bits/stdc++.h>
using namespace std;

int main(){
  int m, n, nn;
  while(std::cin >> m >> n >> nn, m){
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
      std::cin >> p[i];
    }
    sort(p.begin(), p.end());
    int maxi = 0, ans = 1e9;
    for (int i = n; i <= nn; i++) {
      if(maxi <= p[m - i] - p[m - i - 1]){
        ans = i;
        maxi = p[m - i] - p[m - i - 1];
      }
    }
    std::cout << ans << std::endl;
  }
  return 0;
}