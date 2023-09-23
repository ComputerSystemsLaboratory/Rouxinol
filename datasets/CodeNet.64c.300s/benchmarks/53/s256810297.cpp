#include <iostream>

int main(int argc, char const *argv[]) {
  int a,b,c;
  int count = 0;
  std::cin >> a >> b >> c;
  for(int i = a; i <= b; i++) {
    if ((c%i) == 0){
      count++;
    }
  }
  std::cout << count << '\n';
  return 0;
}