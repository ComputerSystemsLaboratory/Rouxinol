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

#include <iostream>
using namespace std;

int main() {
  int a[3];
  int swp;
  cin >> a[0] >> a[1] >> a[2];
  if (a[0] > a[1]) {
    swp = a[0];
    a[0] = a[1];
    a[1] = swp;
  }

  if (a[1] > a[2]) {
    swp = a[1];
    a[1] = a[2];
    a[2] = swp;
  }

  if (a[0] > a[2]) {
    swp = a[0];
    a[0] = a[2];
    a[2] = swp;
  }

  if (a[0] > a[1]) {
    swp = a[0];
    a[0] = a[1];
    a[1] = swp;
  }

  cout << a[0] << " " << a[1] << " " << a[2] << endl;
  return 0;
}

