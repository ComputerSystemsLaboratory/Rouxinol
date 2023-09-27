#include<iostream>
#include<cmath>
using namespace std;
int func(int y, int v){
  return v * (100 + y) / 100;
}
int main(){
  int x, y, s;
  while(true){
    cin >> x >> y >> s;
    if((x|y|s) == 0){
      break;
    }
    int pre_s = s * 100 / (100 + x);
    int ans = -1;
    for(int v1 = 0; v1 <= pre_s; ++v1){
      for(int v2 = 0; v2 <= pre_s; ++v2){
        if(func(x, v1) + func(x, v2) == s){
          int v_s = func(y, v1) + func(y, v2);
          ans = ans > v_s ? ans : v_s;
        }
      }
    }
    cout << ans << endl;
  }  
}