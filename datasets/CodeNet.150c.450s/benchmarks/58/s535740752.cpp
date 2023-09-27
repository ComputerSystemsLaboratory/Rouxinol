//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B&lang=jp
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main(){

  stack<int> stk;
  string word;
  int first, second, out;
  while(cin >> word){
    if(word == "+"){
      first = stk.top();
      stk.pop();
      second = stk.top();
      stk.pop();
      out = first + second;
      stk.push(out);
    }
    else if(word == "-"){
      first = stk.top();
      stk.pop();
      second = stk.top();
      stk.pop();
      out = - first + second;
      stk.push(out);
    }else if(word == "*"){
      first = stk.top();
      stk.pop();
      second = stk.top();
      stk.pop();
      out = first * second;
      stk.push(out);
    }else{
      int i = stoi(word);
      stk.push(i);
    }
  }
  out = stk.top();
  cout << out << endl;
}