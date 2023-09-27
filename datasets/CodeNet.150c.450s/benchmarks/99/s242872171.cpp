#include <iostream>
#include <string>
#include <stack>

using namespace std;

char suffix[] = { 'm', 'c', 'x', 'i' };

int decode(string& input)
{
  int number = 0;
  stack<char> st;
  
  for (int i = 0; i != input.size(); i++) {
    if (input[i] >= '2' && input[i] <= '9') {
      st.push(input[i]);
    } else if (input[i] == suffix[0]) {
      if (!st.empty()) {
        number += (st.top() - 0x30) * 1000;
        st.pop();
      } else {
        number += 1000;
      }
    } else if (input[i] == suffix[1]) {
      if (!st.empty()) {
        number += (st.top() - 0x30) * 100;
        st.pop();
      } else {
        number += 100;
      }
    } else if (input[i] == suffix[2]) {
      if (!st.empty()) {
        number += (st.top() - 0x30) * 10;
        st.pop();
      } else {
        number += 10;
      }
    } else {
      if (!st.empty()) {
        number += st.top() - 0x30;
      } else {
        number += 1;
      }
    }
  }
  return number;
}

string encode(int input)
{
  string str = "";
  stack<char> st;

  for (int i = 3; i >=0 ; --i) {
    if (input % 10) {
      st.push(suffix[i]);
      if (input % 10 != 1) {
        st.push(input % 10 + 0x30);
      }
    }
    input /= 10;
  }
  
  while (!st.empty()) {
    str += st.top();
    st.pop();
  }
  
  return str;
}

int main()
{
  int n;
  string input1, input2;
  string output;

  cin >> n;
  while (n--) {
    cin >> input1 >> input2;
    int sum = decode(input1) + decode(input2);
    output = encode(sum);
    cout << output << endl;
  }
}

