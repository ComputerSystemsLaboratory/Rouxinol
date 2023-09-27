#include <iostream>

using namespace std;

int sum2(int n, int total, int stage)
{
  int count = 0;

  if (stage == 4) {
    if (total == n) return 1;
    return 0;
  }

  if (total > n) return 0;

  for (int i = 0; i < 10; i++) {
    count += sum2(n, total + i, stage + 1);
  }

  return count;
}

int sum(int n)
{
  int count = 0;

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      for (int k = 0; k < 10; k++)
        for (int l = 0; l < 10; l++)
          if (i + j + k + l == n) count++;

  return count;
}

int main(void)
{
  int n;

  while (cin >> n) cout << sum2(n, 0, 0) << endl;

  return 0;
}