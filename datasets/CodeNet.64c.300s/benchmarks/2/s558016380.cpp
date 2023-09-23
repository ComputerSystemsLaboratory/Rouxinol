#include <iostream>


int main() {
  int m, f, r;
  int mf;
  char grade;

  while (true) {
    std::cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) break;
    mf = m + f;
    if (m == -1 || f == -1) {
      grade = 'F';
    } else if (mf >= 80) {
      grade = 'A';
    } else if (mf >= 65) {
      grade = 'B';
    } else if (mf >= 50) {
      grade = 'C';
    } else if (mf >= 30) {
      if (r >= 50) {
        grade = 'C';
      } else {
        grade = 'D';
      }
    } else {
      grade = 'F';
    }
    std::cout << grade << std::endl;
  }

  return 0;
}

