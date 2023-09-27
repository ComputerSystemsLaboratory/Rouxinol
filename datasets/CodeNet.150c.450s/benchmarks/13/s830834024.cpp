#include <iostream>
#include <string>
using namespace std;

int main () {
  string x, y;
 cin >> x;
  cin >> y;

  x = x + x;

  int a = x.find(y);

  if (a == -1) cout << "No" << endl;
  else  cout << "Yes" << endl;

  return 0;
}