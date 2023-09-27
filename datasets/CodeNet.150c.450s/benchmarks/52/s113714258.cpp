#include <iostream>
#include <stack>

using namespace std;

int main()
{
  int buf;
  stack<int> st;
  while(cin >> buf)
  if(buf==0)
  {
    cout << st.top() << endl;
    st.pop();
  }
  else
    st.push(buf);
  return 0;
}