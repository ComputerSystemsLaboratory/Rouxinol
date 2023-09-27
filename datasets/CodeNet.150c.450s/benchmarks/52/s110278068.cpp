#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> sta;
  int temp;
  
  while(cin >> temp){    
    if (temp==0){
      if (sta.empty()==false){
	cout << sta.top() <<endl;
	sta.pop();
      }
    }else{
      sta.push(temp);
    }
  }
    
  return 0;
  
}