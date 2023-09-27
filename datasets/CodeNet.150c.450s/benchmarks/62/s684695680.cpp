#include <iostream>
#include <algorithm>

int main(){
  int a[3];
  for(int i = 0; i < 3; i++){
     std::cin >> a[i];
  }
  std::sort(a, a + 3);
  for(int i = 0; i < 3; i++){
    if(i != 0){
      std::cout << " ";
    }
     std::cout << a[i];
  }
  std::cout << std::endl;
}

