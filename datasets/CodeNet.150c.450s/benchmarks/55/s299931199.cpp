#include <cstdio>
#include <utility>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  string str;
  int count = 0;
  int sum;
  int a;
  int offset;
  string splitString;
  vector<string> strList;

  while (1) {
    cin >> str;

    if (str == "0") {
      break;
    }

    strList.push_back(str);
    count++;
  }

  for (int i = 0; i < count; i++) {
    offset = 0;
    sum = 0;
    while (offset < strList[i].length()) {
      splitString = strList[i].substr(offset, 8);
      a = stoi(splitString);
      while (a > 0) {
        sum += a % 10;
        a /= 10;
      }
      offset += 8;
    }
    cout << sum << "\n";
  }

  return 0;
}