#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
  int e;
  stack<int> S;
  while(cin >> e){
    if(e > 0){
      S.push(e);
      continue;
    }
    cout << S.top() << endl;
    S.pop(); 
  }

  return 0;
}