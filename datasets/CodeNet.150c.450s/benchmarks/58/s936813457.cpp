#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
using namespace std;

stack <int> st;

int main(void) {
 int cal1,cal2;
 string s;

 while(cin >> s) {
  if(s[0] == '+') {
    cal1 = st.top(); st.pop();
    cal2 = st.top(); st.pop();
    st.push(cal2+cal1);
  } else if(s[0] == '-') {
    cal1 = st.top(); st.pop();
    cal2 = st.top(); st.pop();
    st.push(cal2-cal1);
  } else if(s[0] == '*') {
    cal1 = st.top(); st.pop();
    cal2 = st.top(); st.pop();
    st.push(cal2*cal1);
  } else if(s[0] == ' ') {
    continue;
  } else {
    st.push(atoi(s.c_str()));
  }
 }
 cout << st.top() << endl;
 return 0;
}