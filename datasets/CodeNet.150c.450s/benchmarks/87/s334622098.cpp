#include<cstdio>
using namespace std;

int h, d[10][5];

int check() {
  int counter = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < 3; j++) {
      if (d[i][j] == -10) continue;
      if (d[i][j] == d[i][j + 1] && d[i][j] == d[i][j + 2]) {
        int num = d[i][j];
        for (int k = j; k < 5; k++) {
          if (d[i][k] == num) d[i][k] = -1, counter += num;
          else break;
        }
        break;
      }
    }
  }
  return counter;
}

void fall() {
  for (int j = 0; j < 5; j++) {
    int counter = 0, temp = -1;
    for (int i = h - 1; i >= 0; i--) {
      if (d[i][j] == -10) { temp = i; break; }
      if (d[i][j] == -1) counter++;
      else d[i + counter][j] = d[i][j];
    }
    for (int i = 0; i < counter; i++) d[temp + 1 + i][j] = -10;
  }
}

int main() {
  while (1) {
    scanf("%d", &h);
    if (h == 0) break;
    for (int i = 0; i < h; i++) for (int j = 0; j < 5; j++) scanf("%d", &d[i][j]);
    int sum = 0;
    while (1) {
      int counter = check();
      if (counter == 0) break;
      sum += counter;
      fall();
    }
    printf("%d\n", sum);
  }
}

