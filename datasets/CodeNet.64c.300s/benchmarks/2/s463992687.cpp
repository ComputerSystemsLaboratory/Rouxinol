#include <iostream>

int main(void) {
  int m = 0;
  int f = 0;
  int r = 0;

  std::cin >> m >> f >> r;

  while(!((m < 0) && (f < 0) && (r < 0))) {
    int total = m + f;
    char grade = 'F';

    if ((m < 0) || (f < 0))  {
      grade = 'F';
    }  else if (total >= 80) {
      grade = 'A';
    } else if((total >= 65) && (total < 80)) {
      grade = 'B';
    } else if((total >= 50) && (total < 65)) {
      grade = 'C';
    } else if((total >= 30) && (total < 50)) {
      if (r >= 50) {
	grade = 'C';
      } else {
	grade = 'D';
      }
    } else {
      grade = 'F';
    }
    
    std::cout << grade << std::endl;
    
    std::cin >> m >> f >> r;
  }
  

  return 0;
}