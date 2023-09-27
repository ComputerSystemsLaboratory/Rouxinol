#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, p;
  cin >> n >> p;
  while(n != 0 && p != 0){
    vector<int> v(n);
    for(int i = 0; i < n; i++){
      v[i] = 0;
    }

    int ans;
    int stone = p;
    bool ok = false;
    while(1){
      for(int i = 0; i < n; i++){
        if(stone > 0){
          v[i]++;
          stone--;
        }else{
          stone += v[i];
          v[i] = 0;
        }

        if(v[i] == p){
          ans = i;
          ok = true;
          break;
        }
      }
      if(ok)break;
    }
    cout << ans << endl;
    cin >> n >> p;
  }
}