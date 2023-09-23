#include <iostream>

using namespace std;

int main() {
  int S[13], H[13], C[13], D[13];
  for (int i = 0; i < 13; i++) {
    S[i] = 0;
    H[i] = 0;
    C[i] = 0;
    D[i] = 0;
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    char c;
    int x;
    cin >> c >> x;
    if (c == 'S') S[x-1] += 1;
    if (c == 'H') H[x-1] += 1;
    if (c == 'C') C[x-1] += 1;
    if (c == 'D') D[x-1] += 1;
  }
  for (int i = 0; i < 13; i++)
    if (!S[i]) cout << "S " << i+1 << endl;
  for (int i = 0; i < 13; i++)
    if (!H[i]) cout << "H " << i+1 << endl;
  for (int i = 0; i < 13; i++)
    if (!C[i]) cout << "C " << i+1 << endl;
  for (int i = 0; i < 13; i++)
    if (!D[i]) cout << "D " << i+1 << endl;
  return 0;
}