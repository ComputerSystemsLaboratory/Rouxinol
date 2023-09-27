#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
int main(){
  stack<int>st;
  int a;
  cin >> a;
  st.push(a);
  while(scanf("%d",&a) != EOF){
    if(!a){
      cout << st.top() << endl;
      st.pop();
    }else{
      st.push(a);
    }
  }
  return(0);
}