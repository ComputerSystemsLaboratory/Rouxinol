#include <iostream>
using namespace std;
int N, A[10010];

int min() {
  int candMin = A[0];
  for (int i=0;i<N;i++) {
    if (candMin > A[i])
      candMin = A[i];
  }
  return candMin;
}

int max() {
  int candMax = A[0];
  for (int i=0;i<N;i++) {
    if (candMax < A[i])
      candMax = A[i];
  }
  return candMax;
}

long sum() {
  long s = 0;
  for (int i=0;i<N;i++) {
    s += A[i];
  }
  return s;
}

int main() {
  cin >> N;
  for (int i=0;i<N;i++)
    cin >> A[i];
  cout << min() << " " << max() << " " << sum() << endl;
}