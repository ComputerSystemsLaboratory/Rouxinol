#include <bits/stdc++.h>
using namespace std;



int main(){

  int n; 
  char str[100];
  stack<int> s;

  while(scanf("%s",str) != EOF){

    int a, b;

    if(str[0] == '*'){
      a = s.top();
      s.pop();
      b = s.top();
      s.pop();
      s.push(a*b);
    }else if(str[0] == '/'){
      a = s.top();
      s.pop();
      b = s.top();
      s.pop();
      s.push(b/a);
    }else if(str[0] == '+'){
      a = s.top();
      s.pop();
      b = s.top();
      s.pop();
      s.push(a+b);
    }else if(str[0] == '-'){
      a = s.top();
      s.pop();
      b = s.top();
      s.pop();
      // int ans = a - b;
      //cout << a << b << a-b;
      s.push(b-a);
    }else s.push(atoi(str));
    //cout << s.top() << endl;
  }

  cout << s.top() << endl;
  

  return 0;
}