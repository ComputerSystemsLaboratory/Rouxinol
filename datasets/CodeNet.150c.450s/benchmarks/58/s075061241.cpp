#include<bits/stdc++.h>
using namespace std;

  stack<int>st;
  char s[3000];
  int a,b;
int main(){
  while(scanf("%s",s) != EOF ){
    if(s[0]=='+'){
      a=st.top();
      st.pop();
      b=st.top();
      st.pop();
      st.push(a+b);
    }
    else if(s[0]=='-'){
      a=st.top();
      st.pop();
      b=st.top();
      st.pop();
      st.push(b-a);
    }
    else if(s[0]=='*'){
      a=st.top();
      st.pop();
      b=st.top();
      st.pop();
      st.push(a*b);
    }
    else st.push(atoi(s));
  }
  cout<<st.top()<<endl;
}