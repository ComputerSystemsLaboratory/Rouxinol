#include<iostream>
#include<stack>

using namespace std;

int main(void){
  int x;
  stack<int>st;

  while(cin >> x){
    if(x==0 && !st.empty()){
      cout << st.top() << endl;
      st.pop();
    }
    else st.push(x);
  }
  return 0;
}