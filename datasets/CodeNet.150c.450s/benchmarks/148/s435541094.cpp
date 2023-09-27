#include <stdio.h>

int main() {
  int X, verdict[4] = {0}; // AC, WA, TLE, RE
  scanf("%d", &X);

  for(int i = 0; i < X; i++) {
    char str[5];
    scanf("%s", str);
    switch(str[0]) {
      case 'A':
        verdict[0]++;
        break;
      case 'W':
        verdict[1]++;
        break;
      case 'T':
        verdict[2]++;
        break;
      case 'R':
        verdict[3]++;
        break;
    }
  }

  printf("AC x %d\n", verdict[0]);
  printf("WA x %d\n", verdict[1]);
  printf("TLE x %d\n", verdict[2]);
  printf("RE x %d\n", verdict[3]);
  return 0;
}