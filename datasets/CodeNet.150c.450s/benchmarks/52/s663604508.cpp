#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> stk;
  int x;
  while(cin>>x){
    if(x) stk.push(x);
    else{
      cout<<stk.top()<<endl;
      stk.pop();
    }
  }
  return 0;
}