#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int S;
  cin >> S;

  int s, m, h;
  s = S % 60;
  m = (S / 60) % 60;
  h = S / (60 * 60);

  cout << h << ":" << m << ":" << s << endl;
}