#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <stack>
using namespace std;
int main(){
  string str;
  stack<int> st;
  getline(cin, str);
  stringstream ss(str);
  while(ss >> str){
    if(isdigit(str[0])){
      int x = atoi(str.c_str());
      st.push(x);
    }
    else{
      int p2 = st.top(); st.pop();
      int p1 = st.top(); st.pop();
      switch(str[0]){
      case '+':
	st.push(p1+p2); break;
      case '-':
	st.push(p1-p2); break;
      case '*':
	st.push(p1*p2); break;
      }
    }
  }
  cout << st.top() << endl;

  return 0;
}