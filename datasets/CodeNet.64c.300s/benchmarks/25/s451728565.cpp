#include<iostream>

using namespace std;

int main(void) {
  int A[4];
  int B[4];
  int blow;
  int hit;
  int tmp;

  while(cin >> tmp) {
    blow = 0;
    hit = 0;
    
    A[0] = tmp;
    for(int i = 1; i < 4; i++) {
      cin >> A[i];
    }
    for(int i = 0; i < 4; i++) {
      cin >> B[i];
    }

    for(int i = 0; i < 4; i++) {
      if(A[i] == B[i]) {
        hit++;
      }
      else {
        for(int j = 0; j < 4; j++) {
          if(A[i] == B[j]) {
            blow++;
          }
        }
      }
    }
    cout << hit << " " << blow << endl;
  }

  return 0;
}