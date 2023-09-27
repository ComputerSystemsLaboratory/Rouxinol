#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while (true) {
    int h, w;
    cin >> h >> w;
    if (h + w == 0) {
      break;
    }
    int diag2 = h * h + w * w;

    int ans_w = 150;
    int ans_h = 150;
    
    for (int i = 1; i < 151; i++) {
      for (int j = 1; j < 151; j++) {
        if (i >= j) {
          continue;
        }
        int temp = i * i + j * j;
        if (diag2 < temp) {
          int temp2 = ans_w * ans_w + ans_h * ans_h;
          if (temp < temp2) {
            ans_h = i;
            ans_w = j;
          } else {
            if (i < ans_h) {
              ans_h = i;
              ans_w = j;
            }
          }
        } else if (diag2 == temp) {
          if (h < i) {
            int temp2 = ans_w * ans_w + ans_h * ans_h;
            if (temp < temp2) {
              ans_h = i;
              ans_w = j;
            } else {
              if (i < ans_h) {
                ans_h = i;
                ans_w = j;
              }
            }
          }
        } 
      }
    }

    cout << ans_h << " " << ans_w << endl;
  }
  
  return 0;
}