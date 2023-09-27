#include<bits/stdc++.h>
using namespace std;

int solve(string);

stack <int> st;

int main()
{
  string str;
  while(cin >> str){
    if(str == "+" || str == "-" || str == "*")
      st.push(solve(str));
    else st.push(atoi(str.c_str()));
    
    if(getchar()=='\n'){
      cout << st.top() << endl;
      return 0;
    }
  }
  return 0;
}

int solve(string str){
  int b = st.top();
  st.pop();
  int a = st.top();
  st.pop();
  if(str == "+")return a+b;
  else if(str == "-")return a-b;
  else if(str == "*")return a*b;
}

