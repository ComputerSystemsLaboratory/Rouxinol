#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  getline(cin, s);
  stringstream ss(s);
  stack<string> st;

  while (ss.peek() != EOF) {
    uint t;
    ss >> t;
    st.push(to_string(t));
    if (ss.peek() == EOF) break;
    st.push(" ");
  }

  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;
}

