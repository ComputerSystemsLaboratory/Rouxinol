#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  
  while(n != 0 && m != 0){
    vector<int> taro(n), hanako(m);
    int sumt = 0;
    int sumh = 0;
    for(int i = 0; i < n; i++){
      cin >> taro[i];
      sumt += taro[i];
    }
    for(int i = 0; i < m; i++){
      cin >> hanako[i];
      sumh += hanako[i];
    }

    sort(taro.begin(), taro.end());
    sort(hanako.begin(), hanako.end());
    
    int anst = -1;
    int ansh = -1;

    bool ok = false;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(sumt + 2 * hanako[j] == sumh + 2 * taro[i]){
          anst = taro[i];
          ansh = hanako[j];
          ok = true;
          break;
        }
      }
      if(ok)break;
    }
    
    if(anst == -1)cout << -1 << endl;
    else cout << anst << " " << ansh << endl;
    

    cin >> n >> m;
  }      
}