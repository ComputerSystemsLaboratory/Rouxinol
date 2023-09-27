#include <bits/stdc++.h>
using namespace std;

struct Dice {
  int s1, s2, s3, s4, s5, s6;
  void turnN() {
    int tmp = s1;
    s1 = s2; s2 = s6; s6 = s5; s5 = tmp;
  }
  void turnS() {
    int tmp = s1;
    s1 = s5; s5 = s6; s6 = s2; s2 = tmp;
  }
  void turnW() {
    int tmp = s1;
    s1 = s3; s3 = s6; s6 = s4; s4 = tmp;
  }
  void turnE() {
    int tmp = s1;
    s1 = s4; s4 = s6; s6 = s3; s3 = tmp;
  }
};

int main() {
  
  int S1, S2, S3, S4, S5, S6, q;
  
  cin >> S1 >> S2 >> S3 >> S4 >> S5 >> S6 >> q;
  
  Dice d = {S1, S2, S3, S4, S5, S6};
  
  for (int i = 0; i < q; i++) {
    
    int top, front; cin >> top >> front;
    
    while (true) {
      
      int r = rand();
      
      if (r % 4 == 0) d.turnN();
      if (r % 4 == 1) d.turnS();
      if (r % 4 == 2) d.turnW();
      if (r % 4 == 3) d.turnE();
      
      if (d.s1 == top && d.s2 == front) {
        cout << d.s3 << endl;
        break;
      }
      
    }
    
  }
  
}
