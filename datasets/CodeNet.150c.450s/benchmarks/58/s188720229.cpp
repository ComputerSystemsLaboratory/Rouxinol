#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> st;
  char a[2];
  int b,c;
  while( scanf("%s",a) != EOF){
    if(a[0]=='+'||a[0]=='-'||a[0] =='*'){
      c = st.top();
      st.pop();
      b = st.top();
      st.pop();
      if(a[0] == '+') st.push(b+c);
      else if(a[0] == '-') st.push(b-c);
      else if(a[0] == '*') st.push(b*c);
    }
    else st.push(atoi(a));
  }
  cout << st.top() << endl;
  return 0;
}