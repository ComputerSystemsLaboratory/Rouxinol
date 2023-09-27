#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;
  if (x + r > w || x - r < 0)
    cout << "No" << endl;
  else if (y + r > h || y - r < 0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}

