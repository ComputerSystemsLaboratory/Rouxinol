#include <bits/stdc++.h>
  
int main() {  

  std::stack<int> s;
  std::string str;

  while( std::cin >> str ) {
    if( str[0] == '+' ) {
      int right = s.top(); s.pop();
      int left  = s.top(); s.pop();
      s.push(left + right);
    }
    else if( str[0] == '-' ) {
      int right = s.top(); s.pop();
      int left  = s.top(); s.pop();
      s.push(left - right);
    }
    else if( str[0] == '*' ) {
      int right = s.top(); s.pop();
      int left  = s.top(); s.pop();
      s.push(left * right);
    }
    else {
      s.push( stoi(str) );
    }
  }

  std::cout << s.top() << std::endl;

  return 0;
}