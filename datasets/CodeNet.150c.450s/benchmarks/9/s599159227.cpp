/**
 * Shuffle.cpp
 * Create:20180430
 * Description:n舞のカードの山のシャッフルした
 * 結果を出力するプログラム
 */
#include <iostream>
#include <vector>

/**
 * シャッフル関数
 * @param  cards カード順番文字列
 * @param  h     シャッフルの分離地点
 * @return       シャッフル結果
 */
std::string shuffle(std::string cards, int h){
  cards += cards.substr(0, h);
  cards.erase(cards.begin(), cards.begin() + h);
  return cards;
}

int main(int argc, char* argv[]){
  std::string cards;
  std::vector<std::string> results;

  // 入力
  while (true){
    std::cin >> cards;
    if (cards == "-")
      break;
    int shuffleCount;
    std::cin >> shuffleCount;
    for (int i = 0;i < shuffleCount; i++){
      int h;
      std::cin >> h;
      cards = shuffle(cards, h);
    }
    results.push_back(cards);
  }

  // 出力
  for (std::string str:results){
    std::cout << str << std::endl;
  }

  return 0;
}
