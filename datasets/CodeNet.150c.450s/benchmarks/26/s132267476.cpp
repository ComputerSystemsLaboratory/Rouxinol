#include<iostream>


std::string condition(int a, int b) {
  std::string cond;
  if (a > b) {
    cond = ">";
  } else if (a < b) {
    cond = "<";
  } else {
    cond = "==";
  }
  return cond;
}


int main() {
  int a, b;
  char delimiter = ' ';

  std::cin >> a >> b;
  std::cout <<
    'a' << delimiter << condition(a, b) << delimiter << 'b' << std::endl;

  return 0;
}

