#include <cstdio>
#include <string>
using namespace std;

int m;
int d;
string days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int GetNumDay(int m) {
  switch (m) {
  case 2:
    return 29;
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
  default:
    return 31;
  }
}

int main() {
  while (1) {
    scanf("%d%d", &m, &d);
    if (m == 0 && d == 0) return 0;

    int tot = d-1;
    for (int i=1; i<m; i++) {
      tot += GetNumDay(i);
    }

    puts(days[(3+tot)%7].c_str());
  }
}