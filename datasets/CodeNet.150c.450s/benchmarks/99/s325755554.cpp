#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int n; //計算指示の個数                                                                         
  stack<int> st;
  int cef;
  int ans;

  cin >> n;

  for(int i = 0; i < n; i++) {
    string mcxi1, mcxi2;
    cin >> mcxi1 >> mcxi2;

    int temp1 = 0;
    int temp2 = 0;

    cef = 1;
    for(int i = 0; i < mcxi1.size(); i++) {
      if(mcxi1[i] >= '2' && mcxi1[i] <= '9') {
        st.push(mcxi1[i]-'0');
      }
      else {
        while(!st.empty()) {
          cef = st.top();
          st.pop();
        }
        if(mcxi1[i] == 'm') temp1 += cef * 1000;
        else if(mcxi1[i] == 'c') temp1 += cef * 100;
        else if(mcxi1[i] == 'x') temp1 += cef * 10;
        else if(mcxi1[i] == 'i') temp1 += cef * 1;
        cef = 1;
      }
    }
    cef = 1;
    for(int i = 0; i < mcxi2.size(); i++) {
      if(mcxi2[i] >= '2' && mcxi2[i] <= '9') {
        st.push(mcxi2[i]-'0');
      }
      else {
        while(!st.empty()) {
          cef = st.top();
          st.pop();
        }
        if(mcxi2[i] == 'm') temp2 += cef * 1000;
        else if(mcxi2[i] == 'c') temp2 += cef *100;
        else if(mcxi2[i] == 'x') temp2 += cef * 10;
        else if(mcxi2[i] == 'i') temp2 += cef * 1;
        cef = 1;
      }
    }
    ans = temp1 + temp2;

    if((cef = ans / 1000) != 0) {
      ans = ans % 1000;
      if(cef != 1) cout << cef;
      cout << 'm';
    }
    if((cef = ans / 100) != 0) {
      ans = ans % 100;
      if(cef != 1) cout << cef;
      cout <<'c';
    }
    if((cef = ans / 10) != 0) {
      ans = ans % 10;
      if(cef != 1) cout << cef;
      cout <<'x';
    }
    if(ans / 1 != 0) {
      cef = ans;
      if(cef != 1) cout << cef;
      cout <<'i';
    }
    cout << endl;
  }
  return 0;
}

