#include <bits/stdc++.h>

class Dice {
public:
  int u;
  int r;
  int l;
  int d;
  int b;
  int f;
  void S(void) {
    int temp;
    temp = u; u = b; b = d; d = f; f = temp;
  }
  void N(void) {
    int temp;
    temp = u; u = f; f = d; d = b; b = temp;
  }
  void E(void) {
    int temp;
    temp = u; u = l; l = d; d = r; r = temp;
  }
  void W(void) {
    int temp;
    temp = u; u = r; r = d; d = l; l = temp;
  }
};

int main() {

  Dice dice;
  std::string str;
  
  std::cin >> dice.u;
  std::cin >> dice.f;
  std::cin >> dice.r;
  std::cin >> dice.l;
  std::cin >> dice.b;
  std::cin >> dice.d;

  std::cin >> str;
  for(int i = 0; i < str.size(); ++i) {
    switch( str[i] ) {
    case 'N':
      dice.N();
      break;
    case 'S':
      dice.S();
      break;
    case 'W':
      dice.W();
      break;
    case 'E':
      dice.E();
      break;
    }
  }

  std::cout << dice.u << std::endl;
      
  
  return 0;
}