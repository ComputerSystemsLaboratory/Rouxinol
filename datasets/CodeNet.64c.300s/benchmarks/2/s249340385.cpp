#include <iostream>
using namespace std;

char determineGrade(int mid, int fin, int mak) {
  if (mid == -1 || fin == -1) return 'F';

  int total = mid + fin;
  if (total >= 80) return 'A';
  if (total >= 65) return 'B';
  if (total >= 50) return 'C';
  if (total >= 30) {
    if (mak >= 50) return 'C';
    return 'D';
  }
  return 'F';
}

int main() {
  int buf[3] = {}, cnt = 0;
  while (cin >> buf[cnt++]) {
    if (cnt % 3 != 0) continue;
    cnt = 0;

    int mid = buf[0], fin = buf[1], mak = buf[2];
    if (mid + fin + mak == -3) return 0;
    cout << determineGrade(mid, fin, mak) << endl;
  }
  return 0;
}

