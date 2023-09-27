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
  int x[3000], y[3000];
  int end;
  for (int i = 0; i < 3000; i++) {
    cin >> x[i] >> y[i];
    if (x[i] == 0 && y[i] == 0) {
      end = i;
      break;
    }
  }

  for (int i = 0; i < 3000; i++) {
    if (i == end) break;

    if (x[i] < y[i])
      cout << x[i] << " " << y[i] << endl;
    else
      cout << y[i] << " " << x[i] << endl;
  }
  return 0;
}

