#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> hana;
vector<int> taro;
int n, m, sumt, sumh, tmp;
bool flag = false;

int main(void){
  while(true){
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    
    sumt = 0; sumh = 0;
    hana.clear(); taro.clear();
    for(int i = 0; i < n; i++){
      cin >> tmp;
      taro.push_back(tmp);
      sumt += tmp;
    }
    for(int i = 0; i < m; i++){
      cin >> tmp;
      hana.push_back(tmp);
      sumh += tmp;
    }
    
    sort(hana.begin(), hana.end());
    sort(taro.begin(), taro.end());
    
    flag = false;
    for(int i = 0; i < taro.size(); i++){
      for(int j = 0; j < hana.size(); j++){
        if((sumh - hana[j] + taro[i]) == (sumt - taro[i] + hana[j])){
          cout << taro[i] << " " << hana[j] << endl;
          flag = true;
          break;
        }
      }
      if(flag){
        break;
      }
    }
    if(!flag) cout << -1 << endl;
  }
  return 0;
}