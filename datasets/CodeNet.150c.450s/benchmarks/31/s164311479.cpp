#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main(void)
{
  int N, R[MAX];
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> R[i];
  
  int maxv = -1000000000;
  int minr = R[0];
  
  for (int i = 1; i < N; i++) {
    maxv = max(maxv, R[i] - minr);
    minr = min(minr, R[i]);
  }

  cout << maxv << endl;

  return 0;
}