#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  int car;
  stack<int> st;
  vector<int> result;

  while (cin >> car) {
    if (car == 0) {
      result.push_back(st.top());
      st.pop();
    } else {
      st.push(car);
    }
  }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  for (int i = 0; i < st.size(); i++) {
    cout << st.top() << endl;
    st.pop();
  }
  return 0;
}