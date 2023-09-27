#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  vector<string> result;
  int m, d;
  int mday[12] = {31, 29, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

  while (true) {
    cin >> m >> d;
    if (m == 0 && d == 0)
      break;
    int days = 0;
    for (int i = 1; i < m; i++)
      days += mday[i-1];
    days += d;
    days %= 7;
    if (days == 1)
      result.push_back("Thursday");
    else if (days == 2)
      result.push_back("Friday");
    else if (days == 3)
      result.push_back("Saturday");
    else if (days == 4)
      result.push_back("Sunday");
    else if (days == 5)
      result.push_back("Monday");
    else if (days == 6)
      result.push_back("Tuesday");
    else
      result.push_back("Wednesday");
  }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  return 0;
}