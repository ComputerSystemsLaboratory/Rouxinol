#include<cstdio>
using namespace std;

int n;
char f[10];
bool left, right, now; // true > UP

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) break;
    int counter = 0;
    left = right = now = false;
    for (int i = 0; i < n; i++) {
      scanf("%s", f);
      if (f[0] == 'r') {
        if (f[1] == 'u') {
          right = true;
          if (!now && left) {
            now = true;
            counter++;
          }
        } else {
          right = false;
          if (now && !left) {
            now = false;
            counter++;
          }
        }
      } else {
        if (f[1] == 'u') {
          left = true;
          if (!now && right) {
            now = true;
            counter++;
          }
        } else {
          left = false;
          if (now && !right) {
            now = false;
            counter++;
          }
        }
      }
    }
    printf("%d\n", counter);
  }
}

