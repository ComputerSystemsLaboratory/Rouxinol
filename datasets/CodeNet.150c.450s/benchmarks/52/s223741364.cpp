#include <stack>
#include <cstdio>
#include <queue>
#include <iostream>
using namespace std;

int main(){
  stack <int> s;
  int c;
  int count=0;
  while(cin >> c){
    if(c==0){
      cout << s.top() << endl;
      s.pop();
    }
    else
      s.push(c);
  }
}