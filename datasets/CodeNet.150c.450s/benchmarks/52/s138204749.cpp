#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> a;
  int n;

  while(cin >> n){
    if(n != 0){
      a.push(n);
    }
    else if(a.size() == 0){
      int div = 9 / 10;
      cout << 10 / div << endl;
    }
    else{
      cout << a.top() << endl;
      a.pop();
    }
  }
}