#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>

const int MAX_H = 251;

int main(){
  int H = 0;
  int tree[MAX_H] = {0};

  std::cin >> H;

  for (int i = 1; i <= H; i++) {
    std::cin >> tree[i];
  }

  for (int i = 1; i <= H; i++) {
    std::cout << "node " << i << ": key = "<< tree[i] << ", ";

    if (i != 1){
      std::cout << "parent key = " << tree[i / 2] << ", ";
    } 
    if ((2 * i) <= H) {
      std::cout << "left key = " << tree[2 * i] << ", ";
    }
    if ((2 * i + 1) <= H) {
      std::cout << "right key = " << tree[2 * i + 1] << ", ";
    }

    std::cout << std::endl;
     
  }
  
  return 0;
}