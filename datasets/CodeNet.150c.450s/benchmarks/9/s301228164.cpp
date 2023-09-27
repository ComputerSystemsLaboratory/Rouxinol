#include <iostream>

int main(void) {
  std::string cards;

  std::cin >> cards;

  while (!((cards.size() == 1) && (cards[0] == '-'))) {
    int m = 0;

    std::cin >> m;

    for (int i = 0; i < m; i++) {
      int h = 0;
      
      std::cin >> h;

      cards = cards.substr(h) + cards.substr(0, h);
    }

    std::cout << cards << std::endl;
    
    std::cin >> cards;
  }
  
  return 0;
}