#include <cstdio>
using namespace std;

int zeller(int y, int m , int d) {
  if (m < 3) y--, m += 12;
  return (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7;
}

int main() {
  char day[7][15] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                     "Thursday","Friday","Saturday"};
  int m, d;
  while (scanf("%d%d", &m, &d), m) {
    puts(day[zeller(2004, m, d)]);
  }
}
