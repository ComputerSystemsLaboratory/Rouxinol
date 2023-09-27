#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int gcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return gcd(y, x%y);
  }
}
int main() {
  string str;
  getline(cin, str);
  istringstream istr(str);
  vector<int> v;
  string tmp;
  while (getline(istr, tmp, ' ')) {
    v.push_back(stoi(tmp));
  }
  int a = v.front();
  int b = v.back();
  cout << gcd(max(a, b), min(a, b)) << endl;
}