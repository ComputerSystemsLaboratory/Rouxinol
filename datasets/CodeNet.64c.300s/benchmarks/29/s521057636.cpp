#include<bits/stdc++.h>
using namespace std;

int main(){
  int e;
  while(cin >> e, e){
    int num;
    int ans = 1e9;
    for(int i = 0; i < e; i++){
      if(i * i * i > e)break;
      for(int j = 0; j < e; j++){
        num = e - i * i * i - j * j;
        if(num < 0)break;
        ans = min(ans, num + i + j);
      }
    }
    cout << ans << endl;


  }
}