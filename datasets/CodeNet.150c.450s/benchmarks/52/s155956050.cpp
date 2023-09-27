#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<stack>

using namespace::std;

int main(){
  stack<int> st;
  int i = 0;
  int val = 0;

  while(scanf("%d", &val) != EOF){
    if(val == 0){
      cout << st.top() << endl;
      st.pop();
      continue;
    }
    st.push(val);
  }

  return 0;
}