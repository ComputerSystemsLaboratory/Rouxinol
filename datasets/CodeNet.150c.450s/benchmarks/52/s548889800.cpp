#include<iostream>
#include<stack>

using namespace std;
int main(){
  int op;
  stack<int> intStack;
  while(cin>> op){
    if(op == 0){
      cout << intStack.top() << endl;
      intStack.pop();
    } else {
      intStack.push(op);
    }
  }
  return 0;
}
    
      