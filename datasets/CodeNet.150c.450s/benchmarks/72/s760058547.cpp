#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  string str;
  int cint;

  getline(cin, str);

  for (int i = 0; i < (int)str.size(); i++) {
    cint = (unsigned char)str[i];
    if (cint >= 65 && cint <= 90) {
      cint += 32;
    } else if (cint >= 97 && cint <= 122) {
      cint -= 32;
    }

    cout << (char)cint;
  }

  cout << "\n";

  return 0;

}