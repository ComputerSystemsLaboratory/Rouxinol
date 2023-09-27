#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  stack<int> st;
  string str;
  stringstream ss;
  while(cin >> str) {
    if(str == "+") {
      int r = st.top(); st.pop();
      int l = st.top(); st.pop();
      st.push(l+r);
    }
    else if(str == "-") {
      int r = st.top(); st.pop();
      int l = st.top(); st.pop();
      st.push(l-r);
    }
    else if(str == "*") {
      int r = st.top(); st.pop();
      int l = st.top(); st.pop();
      st.push(l*r);
    }
    else {
      // string -> int
      int num;
      ss << str;
      ss >> num;
      ss.clear();

      st.push(num);
    }
  }
  cout << st.top() << endl;
}