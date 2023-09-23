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
  int a, b, c;
  int count = 0;
  cin >> a >> b >> c;
  for (int j = 1; j <= c; j++) {
    if (c % j == 0 && j <= b && j >= a) count++;
  }

  cout << count << endl;
  return 0;
}

