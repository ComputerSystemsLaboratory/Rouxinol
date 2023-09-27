#include <cstdio>
#include <utility>
#include <vector>

using namespace std;

int main ()
{
  int m, f, r;
  int count = 0;
  vector<char> data(100);

  while (1) {
    scanf("%d %d %d", &m, &f, &r);
    if (m == -1 && f == -1 && r == -1) {
      for (int i = 0; i < count; i++) {
        printf("%c\n", data[i]);
      }
      return 0;
    }
    if (m == -1 || f == -1 || m + f < 30) {
      data[count] = 'F';
      count++;
      continue;
    }
    if (m + f >= 80) {
      data[count] = 'A';
    } else if (m + f >= 65 && m + f < 80) {
      data[count] = 'B';
    } else if (m + f >= 50 && m + f < 65) {
      data[count] = 'C';
    } else if (m + f >= 30 && m + f < 50) {
      if (r >= 50) {
        data[count] = 'C';
      } else {
        data[count] = 'D';
      }
    }
    count++;
  }
}