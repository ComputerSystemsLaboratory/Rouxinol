#include <iostream>
using namespace std;

int main() {
  while(true) {
    int A[4],B[4];
    int hit = 0;
    int blow = 0;
    cin >> A[0] >> A[1] >> A[2] >> A[3];
    if(cin.eof()) break;
    cin >> B[0] >> B[1] >> B[2] >> B[3];
    for(int i=0;i<4;i++) {
      if(A[i] == B[i])
        hit++;
    }
    for(int i=0;i<4;i++) {
      for(int j=0;j<4;j++) {
        if(A[i] == B[j]) {
          blow++;
          break;
        }
      }
    }
    blow = blow - hit;
    cout << hit << " " << blow << endl;
  }
}