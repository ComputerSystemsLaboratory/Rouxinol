#include <iostream>
#include <stack>
 
using namespace std;
 
int main(){
  stack<int> trains;
  int p;
  while(cin >> p){
    if(p == 0){
      cout << trains.top() << endl;
      trains.pop();
    }else{
      trains.push(p);
    }
  }
  return 0;
}