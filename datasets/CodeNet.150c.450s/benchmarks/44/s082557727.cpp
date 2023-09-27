#include <cstdio>
using namespace std;

int as[4];
int bs[4];

int main() {
  while (1) {
    int hit = 0;
    int blow = 0;
  
    for (int i=0; i<4; i++) {
      if (scanf("%d", &as[i]) != 1) return 0;
    }
  
    for (int i=0; i<4; i++) {
      scanf("%d", &bs[i]);
      if (as[i] == bs[i]) hit++;
      else {
        for (int j=0; j<4; j++) {
          if (as[j] == bs[i]) blow++;
        }
      }
    }
  
    printf("%d %d\n", hit, blow);
  }
}