#include <iostream>

int cube(int i);

int main(int argc, char *argv[]){
  int i;
  std::cin >> i;
  i = cube(i);
  std::cout << i << std::endl;
  return 0;
}

int cube(int i){
  i = i*i*i;
  return i;
}