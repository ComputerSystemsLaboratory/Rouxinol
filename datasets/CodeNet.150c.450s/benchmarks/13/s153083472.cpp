#include <iostream>
using namespace std;
int main(){
  std::string s;
  std::string p;
  std::string g;
  cin >>  s>>  p;
  int count = 0;
  int i=0;
  int j= 0;
  int f = 0;
  for(i = 0;i < s.length();i++){
    int k = i;
    for(j = 0;j < p.length();j++){
      if(s[k] != p[j]){
        count = 0;
        break;
      }else{
        k++;
        count++;
        if(k == s.length()){
          k = 0;
        }
      }
    }
    if(count == p.length()){
      break;
    }
  }
  if(count == p.length()){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}