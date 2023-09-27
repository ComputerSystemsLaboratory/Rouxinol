#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  vector<int> S(14, false);
  vector<int> H(14, false);
  vector<int> C(14, false);
  vector<int> D(14, false);

  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    char k;
    int num;
    cin >> k >> num;

    if (k == 'S') S[num] = true;
    if (k == 'H') H[num] = true;
    if (k == 'C') C[num] = true;
    if (k == 'D') D[num] = true;
  }

  for (int i = 1; i < 14; i++) {
    if (S[i] == false) cout << "S " << i << endl;
  }
  for (int i = 1; i < 14; i++) {
    if (H[i] == false) cout << "H " << i << endl;
  }
  for (int i = 1; i < 14; i++) {
    if (C[i] == false) cout << "C " << i << endl;
  }
  for (int i = 1; i < 14; i++) {
    if (D[i] == false) cout << "D " << i << endl;
  }

  return 0;
}