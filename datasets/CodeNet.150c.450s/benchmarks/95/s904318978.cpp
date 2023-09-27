#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  while(cin >> n,n){
    string str[n];
    for(int i=0; i<n; ++i){
      cin >> str[i];
    }
    bool state = false;
    int ans = 0;
    for(int i=0; i<n-1; ++i){
      if(!state){
        if(str[i] == "lu" && str[i+1] == "ru"){
          ++ans;
          state = true;
        }else if(str[i] == "ru" && str[i+1] == "lu"){
          ++ans;
          state = true;
        }
      }else if(state){
        if(str[i] == "ld" && str[i+1] == "rd"){
          ++ans;
          state = false;
        }else if(str[i] == "rd" && str[i+1] == "ld"){
          ++ans;
          state = false;
        }
      }
    }
    cout << ans << endl;
  }
}

