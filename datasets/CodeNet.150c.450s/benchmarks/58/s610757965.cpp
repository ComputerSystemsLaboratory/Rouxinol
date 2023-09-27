#include <bits/stdc++.h>
using namespace std;
int main(){
  stack<int>s;
  string c;
  while(cin >> c){
    if(c[0] == '*' || c[0] == '+' || c[0] == '-' || c[0] == '/'){
      int b = s.top();
      s.pop();
      int a = s.top();
      s.pop();
      if(c[0] == '*')s.push(a * b);
      if(c[0] == '+')s.push(a + b);
      if(c[0] == '-')s.push(a - b);
      if(c[0] == '/')s.push(a / b);
    }else{
      int temp = atoi(c.c_str());
      s.push(temp);
    }
  }
  cout << s.top() << endl;
  return 0;
}