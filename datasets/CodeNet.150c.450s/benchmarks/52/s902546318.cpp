#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<int> car;
  int n,cou=0,i=0,ans[1111];
  while(cin >> n){
    if(n == 0){
      cout << car.top() << endl;
      car.pop();
    }
    else{
      car.push(n);
    }
  }
}