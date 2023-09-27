#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main(){
  string str;
  stack<int> s;
  while(cin>>str){
    if(str == "+"){
      int s1 = s.top(); s.pop();
      int s2 = s.top(); s.pop();
      s.push(s1+s2);
    }
    else if(str == "-"){
      int s1 = s.top(); s.pop();
      int s2 = s.top(); s.pop();
      s.push(s2-s1);
    }
    else if(str == "*"){
      int s1 = s.top(); s.pop();
      int s2 = s.top(); s.pop();
      s.push(s1*s2);
    }
    else{
      stringstream ss(str);
      int x; ss >> x;
      s.push(x);
    }
  }
  cout << s.top() << endl;

  return 0;
}