#include <iostream>
#include <cstring>

const int WIN_SCORE = 3;
const int DRAW_SCORE = 1;

int main(void) {
  int n = 0;

  int taroScore = 0;
  int hanakoScore = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::string taroCard;
    std::string hanakoCard;

    std::cin >> taroCard;
    std::cin >> hanakoCard;

    if (taroCard.compare(hanakoCard) > 0) {
      taroScore += WIN_SCORE;
    } else if (taroCard.compare(hanakoCard) < 0) {
      hanakoScore += WIN_SCORE;
    } else {
      taroScore += DRAW_SCORE;
      hanakoScore += DRAW_SCORE;
    }
  }

  std::cout << taroScore << " " << hanakoScore << std::endl;
  
  return 0;
}