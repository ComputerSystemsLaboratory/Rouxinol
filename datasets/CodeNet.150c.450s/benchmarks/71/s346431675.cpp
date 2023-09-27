#include <iostream>
using namespace std;

int main() {
  unsigned int input;
  unsigned int count;

  while(cin >> input) {
    count = 0;
    for(int a0=0; a0<10; a0++) {
      for(int a1=0; a1<10; a1++) {
        for(int a2=0; a2<10; a2++ ) {
          for(int a3=0; a3<10; a3++) {
            if(a0+a1+a2+a3==input) {
              count++;
            }
          }
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}