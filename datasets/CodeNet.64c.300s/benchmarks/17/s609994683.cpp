#include<bits/stdc++.h>
using namespace std;
int main(){
  int x, y, s;
  while(cin >> x >> y >> s, x || y || s){
    int ret = 0;
    for(int i = 1; i < s; i++){
      for(int j = s - i; j >= i; j--){
        int a = i * (100 + x) / 100;
        int b = j * (100 + x) / 100;
        if(a + b != s) continue;
        ret = max( ret, i * (100 + y) / 100 + j * (100 + y) / 100); 
      }
    }
    cout << ret << endl;
  }

}