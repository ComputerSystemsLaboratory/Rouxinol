#include <iostream>
#include <cmath>

using namespace std;

int Count(bool [], int, int);

int main() {
  const int N = 1000000;
  bool num[N];
  for (int i = 0; i < N; i++)
    num[i] = true;

  const int N_MAX = 999999;
  const double MAX = sqrt(N_MAX);
  for (int i = 2; i <= MAX; i++) {
    if (num[i]) {
      for (int j = i; i*j <= N_MAX; j++) {
        num[i * j] = false;
      }
    }
  }

  int data;
  while (cin >> data) {
    cout << Count(num, 2, data) << endl;
  }
}

int Count(bool data[], int begin, int end) {
  int count = 0;
  for(int i = begin; i <= end; i++)
    if (data[i])
      count++;

  return count;
}