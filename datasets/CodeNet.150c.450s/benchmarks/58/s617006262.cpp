#include <iostream>
#include <deque>
#include <cstdlib>

using namespace std;

int main(void){

  deque<int> st;

  string formula;

  int a,b;

  while(1){

    cin >> formula;

    if(cin.eof()) break;

    char c = *formula.c_str();

    switch (c) {
      case '+':
        a = st[st.size()-2];
        b = st[st.size()-1];
        st.pop_back();
        st.pop_back();
        st.push_back(a + b);
        break;

      case '-':
        a = st[st.size()-2];
        b = st[st.size()-1];
        st.pop_back();
        st.pop_back();
        st.push_back(a - b);
        break;

      case '*':
        a = st[st.size()-2];
        b = st[st.size()-1];
        st.pop_back();
        st.pop_back();
        st.push_back(a * b);
        break;

      default :
        st.push_back(atoi(formula.c_str()));
    }

  }

  for(int i = 0 ; i < st.size() ; i++){
    cout << st[i];
    if(i != st.size() - 1) cout << " ";
  }
  cout << endl;

  return 0;
}