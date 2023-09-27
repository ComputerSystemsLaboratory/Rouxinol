#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  int n;
  stack<int> s;
  
  cin >> n;
  s.push(n);
  
  while(cin >> n) {
    if(n == 0) { n = s.top(); s.pop(); cout << n << endl; }
    else s.push(n);
  }
  
  return 0;
}