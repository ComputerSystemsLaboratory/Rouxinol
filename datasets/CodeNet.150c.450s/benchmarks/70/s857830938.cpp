#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
  vector<string> wday = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", };
  int mond_nr[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,};

  int m, d, yday;
  for (;;) {
    cin >> m >> d;
    if (m == 0 && d == 0)
      break;

    yday = 0;
    for (int i = 0; i < m; i++) {
      yday += mond_nr[i];
    }
    yday += (d - 1);
    cout << wday[yday % 7] << endl;
  }
  return 0;
}