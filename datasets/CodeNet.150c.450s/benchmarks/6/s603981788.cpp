#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int a, b, c;
  string Ans;
  cin >> a >> b >> c;
  if ((a < b) && (b < c)) {
    Ans = "Yes";
  } else {
    Ans = "No";
  }
  cout << Ans << endl;
}