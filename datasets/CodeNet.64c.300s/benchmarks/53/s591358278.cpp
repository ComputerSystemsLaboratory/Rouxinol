#include<iostream>

int main(){
  int a, b, c;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  int count = 0;
  for(int n = a; n <= b; n++){
    if(c % n == 0) count++;
  }

  std::cout << count << std::endl;
  
  return 0;
}

