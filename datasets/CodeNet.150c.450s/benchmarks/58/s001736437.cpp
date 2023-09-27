#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <cstdlib>

using namespace std;

int main()
{
  stack<int> num;
  string s;
  int a, b;
  while(cin >> s){
    if(s >= "0")
      num.push(atoi(s.c_str()));
    else if(s == "+" || s == "-" || s == "*"){
      a = num.top();
      num.pop();
      b = num.top();
      num.pop();
      if(s == "+")
	num.push(a + b);
      else if(s == "-")
	num.push(b - a);
      else
	num.push(a * b);
    }
  }
  cout << num.top() << endl;
 }