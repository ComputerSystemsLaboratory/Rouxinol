#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std;
int n,m,taroSum,hanakoSum;

int hanako[102];
int taro[102];
void solve(){
  int sub = (hanakoSum - taroSum) ;
  if(sub == 0){
    int ans = 10000;
    for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(taro[i] == hanako[j] && ans > taro[i]) ans = taro[i];
    }}
    if(ans != 10000)cout << ans << " " << ans << endl;
    else cout << -1 << endl;
  }
  else {
    int minSum = 100000;
    int minH;
    int minT;
    for(int i = 0; i < n; i++){//taro
      for(int j = 0; j < m; j++){ //hanako
        if(sub - 2*hanako[j] + 2*taro[i]  == 0 && hanako[j] + taro[i] < minSum){
          minSum = taro[i] + hanako[j];
          minT = taro[i];
          minH = hanako[j];
        }
      }
    }
    if(minSum == 100000) cout << -1 << endl;
    else cout << minT << " " << minH << endl;
  }
}

int main(){

  while(true){
    cin >> n >> m;
    hanakoSum = 0;
    taroSum = 0;
    if(n == 0 && m == 0) break;
    for(int i = 0; i < n ; i++){
       cin >> taro[i];
       taroSum += taro[i];
    }

    for(int i = 0; i < m ; i++){
      cin >> hanako[i];
      hanakoSum += hanako[i];
    }
    solve();
  }

  return 0;
}

