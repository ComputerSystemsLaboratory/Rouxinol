#include <iostream>
using namespace std;

int main() {
  int m,n;
  char from[100],to[100],x;
  while(cin >> n) {
    if(n == 0) break;
  for(int i=0;i<n;i++) {
    cin >> from[i] >> to[i];
  }
  cin >> m;
  for(int i=0;i<m;i++) {
    cin >> x;
    for(int j=0;j<n;j++) {
      if(x == from[j]) {
        x = to[j];
        break;
      }
    }
    cout << x;
  }
  cout << endl;
  }
}