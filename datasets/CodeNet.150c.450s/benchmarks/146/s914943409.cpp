#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    float x1, x2, x3, x4, y1, y2, y3, y4, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    a = (y2 - y1) / (x2 - x1);
    b = (y4 - y3) / (x4 - x3);
    if (a == b) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}