#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
  stack<int> st;
  string symbol;
  int x,y;
  while(cin >> symbol){
    switch((char)symbol[0]){
    case '+':
      x=st.top();
      st.pop();
      y=st.top();
      st.pop();
      st.push(y+x);
      break;
    case '-':
      x=st.top();
      st.pop();
      y=st.top();
      st.pop();
      st.push(y-x);
      break;
    case '*':
      x=st.top();
      st.pop();
      y=st.top();
      st.pop();
      st.push(y*x);
      break;
    default:
      st.push(std::stoi(symbol));
      break;
    }
  }

  cout << st.top() << endl;
  return 0;  
}