#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int cal(int a, int b, char op){
  switch(op){
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      return a / b;
    default :
    return 0;
  };
}

int main(){
  int a, b;
  char op;
  vector<int> v;
  while(cin >> a >> op >> b && op != '?'){
    v.push_back(cal(a, b, op));
  }
  for(int i=0;i<(int)v.size();i++){
    cout << v[i] << endl;
  }
  return 0;
}