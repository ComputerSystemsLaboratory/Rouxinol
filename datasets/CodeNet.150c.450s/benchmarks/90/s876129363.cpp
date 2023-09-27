#include <iostream>

using namespace std;

int main() {
  int n, max;
  int t[100] = {0};

  while (cin >> n)
    t[n - 1] += 1;

  for (int i = max = 0; i < 100; i++)
    if (t[i] > 0)
      if (max < t[i]) max = t[i];

  for (int i = 0; i < 100; i++)
    if (t[i] == max)
      cout << i + 1 << endl;

  return 0;
}