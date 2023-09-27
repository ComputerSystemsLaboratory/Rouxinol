#include <iostream>
#include <cstdio>

using namespace std;

int search(int mn, int S, int N)
{
  int count = 0;
  if (mn > N) {return 0;}
  if (S == 1) {
    if (N <= 9) {
      return 1;
    } else {
      return 0;
    }
  }
  for (int i = mn; i < 10; i++) {
    if (N < i) {
      break;
    }
    count += search(i + 1, S - 1, N - i);
  }
  return count;
}

int main()
{
  int N, S;
  while (scanf("%d %d ", &S, &N) == 2) {
    if (N == 0 && S == 0) {break;}
    cout << search(0, S, N) << endl;
  }
  return 0;
}