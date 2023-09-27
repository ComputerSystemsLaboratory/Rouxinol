#include <iostream>

using namespace std;

int main(void) {
  int n, i = 0;
  while(cin >> n) {
    int num = 0;
    for(int a = 0; a < 10; a++) {
      for(int b = 0; b < 10; b++) {
        for(int c = 0; c < 10; c++) {
          for(int d = 0; d < 10; d++) {
            if(a + b + c + d == n) num++;
          }
        }
      }
    }

    cout << num << '\n';
  }

  return 0;
}