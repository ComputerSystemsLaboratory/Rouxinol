#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  cout << S << endl;
}