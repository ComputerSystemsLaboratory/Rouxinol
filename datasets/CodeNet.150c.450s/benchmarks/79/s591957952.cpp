#include <iostream>
#include <stack>
using namespace std;

int main () {
  int n, r;
  while(true){
    cin >> n >> r;
    if(n == 0 && r == 0) break;
    else{
      stack <int> l1, l2, l3;
      while(!l1.empty()) l1.pop();
      int p, c;
      for(int j = 0;j < n; j++) {
        l1.push(j + 1);
      }
      for(int i = 0; i < r; i++) {
        cin >> p >> c;
        for(int j = 0;j < p - 1; j++) {
          l2.push(l1.top());
          l1.pop();
        }
        for(int j = 0;j < c; j++) {
          l3.push(l1.top());
          l1.pop();
        }
        for(int j = 0;j < p - 1; j++) {
          l1.push(l2.top());
          l2.pop();
        }
        for(int j = 0;j < c; j++) {
          l1.push(l3.top());
          l3.pop();
        }
      }
      cout << l1.top() << endl;
    }
  }
  return 0;
}