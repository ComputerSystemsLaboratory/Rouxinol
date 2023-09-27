#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  int scoreT = 0;
  int scoreH = 0;
  std::string cardT;
  std::string cardH;
  for(int i = 0; i < n; ++i) {
    std::cin >> cardT >> cardH;
    if(cardT > cardH) {
      scoreT += 3;
    }
    else if(cardT < cardH) {
      scoreH += 3;
    }
    else if(cardT == cardH) {
      scoreH += 1;
      scoreT += 1;
    }
  }
  std::cout << scoreT << " " << scoreH << std::endl;

  return 0;
}