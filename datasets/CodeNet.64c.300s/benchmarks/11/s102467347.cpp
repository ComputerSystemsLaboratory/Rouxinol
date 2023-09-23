#include <iostream>
using namespace std;
void watch(int);
int main() {
  int S;
  cin >> S;
  watch(S);
}
void watch(int S) {
  int h, m, s;
  h = S / 3600;
  m = (S % 3600) / 60;
  s = (S % 3600) % 60;
  cout << h << ":" << m << ":" << s << endl;
}