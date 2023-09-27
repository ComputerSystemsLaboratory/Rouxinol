#include <iostream>
using namespace std;
int main(void) {
  int n;
  int i = 1;
  
  while(1) {
      cin >> n;
      if(n == 0) {
          break;
      }
      cout << "Case " << i << ": " << n << endl;
      ++i;
  }
  return 0;
}

