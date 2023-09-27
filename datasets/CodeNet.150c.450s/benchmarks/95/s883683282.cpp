#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
  while(1){
    int n;
    cin >> n;
    if(n == 0){
      break;
    }else{
      queue<string> move;
      for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        move.push(x);
      }
      int ans = 0;
      while(!move.empty()){
        string x;
        x = move.front();
        move.pop();
        if(!move.empty()){
          if(x == "lu"){
            if(move.front() == "ru"){
              ans++;
              move.pop();
            }else{
              move.pop();
            }
          }else if(x == "ru"){
            if(move.front() == "lu"){
              ans++;
              move.pop();
            }else{
              move.pop();
            }
          }else if(x == "ld"){
            if(move.front() == "rd"){
              ans++;
              move.pop();
            }else{
              move.pop();
            }
          }else if(x == "rd"){
            if(move.front() == "ld"){
              ans++;
              move.pop();
            }else{
              move.pop();
            }
          }
        }
      }
      cout << ans << endl;
    }
  }
}