#include <iostream>

void displayDate(int index) {
  int i = (7 + index - 1) % 7 ;

  if (i == 0) {
    std::cout << "Sunday" << std::endl;
  } else if (i == 1) {
    std::cout << "Monday" << std::endl;
  } else if (i == 2) {
    std::cout << "Tuesday" << std::endl;
  } else if (i == 3) {
    std::cout << "Wednesday" << std::endl;
  } else if (i == 4) {
    std::cout << "Thursday" << std::endl;
  } else if (i == 5) {
    std::cout << "Friday" << std::endl;
  } else if (i == 6) {
    std::cout << "Saturday" << std::endl;
  }
}

int main() {
  while (true) {
    int m, d;
    std::cin >> m;
    std::cin >> d;

    if (m == 0 && d == 0) {
      break;
    } else if (m == 1) {
      displayDate(d + 4);
    } else if (m == 2) {
      displayDate(d + 0);
    } else if (m == 3) {
      displayDate(d + 1);
    } else if (m == 4) {      
      displayDate(d + 4);
    } else if (m == 5) {
      displayDate(d + 6);
    } else if (m == 6) {
      displayDate(d + 2);
    } else if (m == 7) {
      displayDate(d + 4);
    } else if (m == 8) {
      displayDate(d + 0);
    } else if (m == 9) {
      displayDate(d + 3);
    } else if (m == 10) {
      displayDate(d + 5);
    } else if (m == 11) {
      displayDate(d + 1);
    } else if (m == 12) {
      displayDate(d + 3);
    }
  }

  return 0;
}

