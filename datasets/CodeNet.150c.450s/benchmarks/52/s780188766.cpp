#include<iostream>
#include<stack>
#include<vector>
using namespace std;
#define ARRAY_MAX 110

int main(void){

  int i = 0;
  int n;
  stack<int> Stack;
  vector<int>array(ARRAY_MAX,0);

  while(cin >> n){
    if(n){
      Stack.push(n);
    }else{
      cout << Stack.top() << endl;
      Stack.pop();
    }
  }
  return 0;
}