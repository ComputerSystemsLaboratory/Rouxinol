#include <iostream>

using namespace std;

static char grade(int m, int f, int r) {
  if (m == -1 || f == -1)
    return 'F';

  const int s = m + f;
  if (s >= 80)
    return 'A';
  else if (65 <= s && s < 80)
    return 'B';
  else if (50 <= s && s < 65)
    return 'C';                                                                      
  else if (30 <= s && s < 50)
    return r >= 50 ? 'C' : 'D';                                                      

  // s < 30                                                                                                                                                               
  return 'F';
}

int main() {
  int m, f, r;
  for (;;) {
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1)
      break;
    cout << grade(m, f, r) << endl;
  }
  return 0;
}