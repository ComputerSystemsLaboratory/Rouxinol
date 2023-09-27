#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int m, maxi, mini;
  while(std::cin >> m >> mini >> maxi, m){
    vector<int> p(m);
    for (int i = 0; i < m; i++) std::cin >> p[i];
    sort(p.begin(), p.end());
    int gap = 0, ans = -1;
    for (int i = m - maxi; i <= m - mini; i++) {
      if(gap < p[i] - p[i - 1]){
        gap =  p[i] - p[i - 1];
        ans = m - i;
      }
    }
    std::cout << ans << std::endl;
    // std::cout << std::endl;
  }
  return 0;
}