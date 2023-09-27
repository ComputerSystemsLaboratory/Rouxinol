#include <iostream>
#include <deque>
#include <string>
using namespace std;
int stateA(deque<string>& a);
int stateB(deque<string>& a);
int stateC(deque<string>& a);
int stateD(deque<string>& a);
int stateE(deque<string>& a);
int stateF(deque<string>& a);
int main(){
  int n;
  while(true){
    cin >> n;
    if(n == 0){
      break;
    }
    deque<string> hoge;
    for(int i = 0; i < n; ++i){
      string tmp;
      cin >> tmp;
      hoge.push_back(tmp);
    }
    cout << stateA(hoge) << endl;
  }
  return 0;
}
int stateA(deque<string>& a){
  if(a.empty()){
    return 0;
  }
  string cur = a.front(); a.pop_front();
  if(cur == "lu"){
    return stateB(a);
  }
  else if(cur == "ru"){
    return stateC(a);
  }  
  return stateA(a);
}
int stateB(deque<string>& a){
  if(a.empty()){
    return 0;
  }
  string cur = a.front(); a.pop_front();
  if(cur == "ld"){
    return  stateA(a);
  }
  if(cur == "ru"){
    return stateD(a) + 1;
  }
  return stateB(a);
}
int stateC(deque<string>& a){
  if(a.empty()){
    return 0;
  }
  string cur = a.front(); a.pop_front();
  if(cur == "rd"){
    return stateA(a);
  }
  if(cur == "lu"){
    return stateD(a) + 1;
  }
  return stateC(a);
}
int stateD(deque<string>& a){
  if(a.empty()){
    return 0;
  }
  string cur = a.front(); a.pop_front();
  if(cur == "ld"){
    return stateE(a);
  }
  if(cur == "rd"){
    return stateF(a);
  }
  return stateD(a);
}
int stateE(deque<string>& a){
  if(a.empty()){
    return 0;
  }
  string cur = a.front(); a.pop_front();
  if(cur == "rd"){
    return stateA(a) + 1;
  }
  if(cur == "lu"){
    return stateD(a);
  }
  return stateE(a);
}
int stateF(deque<string>& a){
  if(a.empty()){
    return 0;
  }
  string cur = a.front(); a.pop_front();
  if(cur == "ld"){
    return stateA(a) + 1;
  }
  if(cur == "ru"){
    return stateD(a);
  }
  return stateF(a);
}