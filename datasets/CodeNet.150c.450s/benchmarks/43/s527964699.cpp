#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int n;
  while (cin >> n) {
    if (n == 0)
      break;

    int A = 0, B = 0;
    for (int i = 0; i < n; ++i) {
      int c1, c2;
      cin >> c1 >> c2;
      if (c1 > c2) {
	A += (c1+c2);
      } else if (c1 < c2) {
	B += (c1+c2);
      } else {
	A += c1;
	B += c2;
      }
    }
    cout << A << " " << B << endl;
  }
  return 0;
}