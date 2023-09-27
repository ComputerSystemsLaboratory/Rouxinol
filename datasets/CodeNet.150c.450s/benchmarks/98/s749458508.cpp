#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  while(true){
    int n, m;
    cin >> n >> m;
    if(n == 0)
      break;

    vector<int> taro(n+1), hana(m+1);
    int sumt = 0, sumh = 0;
    for(int i=0; i<n; i++){
      cin >> taro[i];
      sumt += taro[i];
    }
    taro[n] = 101;
    for(int i=0; i<m; i++){
      cin >> hana[i];
      sumh += hana[i];
    }
    hana[m] = 101;
    sort(taro.begin(), taro.end());
    sort(hana.begin(), hana.end());

    int ansi = n, ansj = m;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        if(sumt - taro[i] + hana[j] == sumh - hana[j] + taro[i]){
          if(taro[i] + hana[j] < taro[ansi] + hana[ansj]){
            ansi = i;
            ansj = j;
          }
          break;
        }
      }
    }
    if(ansi == n && ansj == m)
      cout << -1 << endl;
    else
      cout << taro[ansi] << ' ' << hana[ansj] << endl;
  }
  
  return 0;
}