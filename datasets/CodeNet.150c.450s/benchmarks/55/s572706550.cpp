//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_B
#include <iostream>
#include <string>
using namespace std;

int count(string x){
  //string?????°???????????????????¶????????????????
  int sum = 0;
  for(int i=0; i<x.length(); i++){
    string key = x.substr(i, 1);
    //cout << key << endl;
    sum += stoi(key);
  }
  return sum;
}

int main(){
  string x;
  while(cin >> x){
    if(x == "0") break;
    else cout << count(x) << endl;
  }
  return 0;
}