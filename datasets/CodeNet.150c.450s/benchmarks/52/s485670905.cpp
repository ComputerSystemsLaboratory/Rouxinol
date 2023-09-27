#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main(){
  stack<int> st;
  int a;
  while(cin>>a){
    if(a)st.push(a);
    else {printf("%d\n",st.top());
      st.pop();
    }
}

   
  return 0;
}