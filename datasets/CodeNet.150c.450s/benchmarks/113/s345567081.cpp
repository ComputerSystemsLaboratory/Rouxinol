#include <iostream>
using namespace std;
int main()
{
  int x = 1;
  int c = 1;
  while (x != 0)
  {
    cin >> x;
    if (x == 0) return 0;
    cout << "Case " << c << ": " << x << endl;
    c++;
  }
}