#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main() {
  int R[MAX], n;

  cin >> n;
  for (int i = 0; i < n; i++) cin >> R[i];

  int margin = -2000000000;
  int min_R = R[0];

  for (int i = 1; i < n; i++) {
    margin = max(margin, R[i] - min_R);
    min_R = min(min_R, R[i]);
  }

  cout << margin << endl;

  return 0;
}
