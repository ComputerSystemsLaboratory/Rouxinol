#include<iostream>
#include <string>
using namespace std;

int main() {
  int m, f, r, i = 0;
  string R[50];

  for (i = 0; i < 50; i ++) {
  cin >> m  >> f >> r;

  if (m == -1 && f == -1 && r == -1)
    break;

  if (m == -1 || f == -1)
    R[i] = "F";

  else if  (m + f >= 80)
    R[i] = "A";

  else if (m + f >= 65 && m + f < 80)
    R[i] = "B";

  else if (m + f >= 50 && m + f < 65)
    R[i] = "C";

  else if (m + f >= 30 && m + f < 50) {
    if (r >= 50)
      R[i] = "C";
    else
      R[i] = "D";
  }

  else
    R[i] = "F";

  }

  for (int j = 0; j < i; j++)
    cout << R[j] << endl;

  return 0;
}

