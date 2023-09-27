#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;

  while(cin >> N, N){
    int cnt = 0;
    string s;
    bool l = false, r = false, a = true, b = false;
    for(int i = 0 ; i < N ; i++){
      cin >> s;
      if(s == "lu"){
        if(r && a) cnt++, a = false, b = true;
        l = true;
      }else if(s == "ru"){
        if(l && a) cnt++, a = false, b = true;
        r = true;
      }else if(s == "ld"){
        if(!r && b) cnt++, a = true, b = false;
        l = false;
      }else{
        if(!l && b) cnt++, a = true, b = false;
        r = false;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}