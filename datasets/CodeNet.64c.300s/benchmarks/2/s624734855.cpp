#include <iostream>
using namespace std;

char getgrade(int m, int f, int r){
  char grade;

  if (m == -1 || f == -1) {
    grade = 'F';
  } else if (m + f >= 80) {
    grade = 'A';
  } else if (m + f >= 65) {
    grade = 'B';
  } else if (m + f >= 50) {
    grade = 'C';
  } else if (m + f >= 30 ) {
    if ( r >= 50) {
      grade = 'C';
    } else {
      grade = 'D';
    }
  } else {
    grade = 'F';
  }

  return grade;

}

int main(int argc, char const *argv[]) {
  int m, f, r;
  while (1) {
    cin >> m >> f >> r;
    if( m == -1 && f == -1 && r == -1) break;
    cout << getgrade(m, f, r) << endl;
  }
  return 0;
}