#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  const int MAX_SIZE = 2000001;
  const int MAX_VALUE = 10000;

  int n;
  cin >> n;

  unsigned short *A, *B;
  A = new unsigned short[n + 1];
  B = new unsigned short[n + 1];
  int cnt[MAX_VALUE + 1];

  for (int i = 0; i <= MAX_VALUE; i++) cnt[i] = 0;

  for (int i = 1; i <= n; i++) {
    cin >> A[i];
    cnt[A[i]]++;
  }

  for (int i = 1; i <= MAX_VALUE; i++) cnt[i] += cnt[i-1];

  for (int i = 1; i <= n; i++) B[cnt[A[i]]--] = A[i];

  for (int i = 1; i <= n; i++) {
    if (i > 1) cout << " ";
    cout << B[i];
  }
  cout << endl;

  return 0;
}