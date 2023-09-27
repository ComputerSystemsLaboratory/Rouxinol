#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int turn, taro_point = 0, hanako_point = 0;
  string taro_card, hanako_card;

  cin >> turn;
  for (int i = 0; i < turn; i++) {
    cin >> taro_card >> hanako_card;

    if (taro_card > hanako_card) {
      taro_point += 3;
    } else if (taro_card < hanako_card) {
      hanako_point += 3;
    } else {
      taro_point++;
      hanako_point++;
    }
  }

  cout << taro_point  << " " << hanako_point<< endl;

  return 0;
}