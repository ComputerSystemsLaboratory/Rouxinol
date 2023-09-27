#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int room[5][4][11] = {};
  
  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    std::cin >> b >> f >> r >> v;
    room[b][f][r] += v;
  }
  
  for (int b = 1; b < 5; b++) {
    for (int f = 1; f < 4; f++) {
      for (int r = 1; r < 11; r++) {
        std::cout << " " << room[b][f][r];
      }
      std::cout << "\n";
    }
    if (b < 4) std::cout << "####################" << "\n";
  }
  
  return 0;
}