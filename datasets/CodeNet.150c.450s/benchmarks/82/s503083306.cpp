#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <sstream>

class Dice {
 private:
  std::array<int, 6> inner_;
  const size_t TABLE[6][2] = {{1, 3}, {5, 2}, {4, 0}, {5, 1}, {0, 3}, {4, 2}};

 public:
  Dice(std::string str) {
    std::istringstream stream(str);
    for(int i = 0; i != 6; ++i) {
      stream >> inner_[i];
    }
  }

  void roll(char dir) {
    std::array<int, 6> new_dice;
    switch(dir) {
    case 'N':
      new_dice[0] = inner_[1];
      new_dice[1] = inner_[5];
      new_dice[2] = inner_[2];
      new_dice[3] = inner_[3];
      new_dice[4] = inner_[0];
      new_dice[5] = inner_[4];
      break;
    case 'S':
      new_dice[0] = inner_[4];
      new_dice[1] = inner_[0];
      new_dice[2] = inner_[2];
      new_dice[3] = inner_[3];
      new_dice[4] = inner_[5];
      new_dice[5] = inner_[1];
      break;
    case 'W':
      new_dice[0] = inner_[2];
      new_dice[1] = inner_[1];
      new_dice[2] = inner_[5];
      new_dice[3] = inner_[0];
      new_dice[4] = inner_[4];
      new_dice[5] = inner_[3];
      break;
    case 'E':
      new_dice[0] = inner_[3];
      new_dice[1] = inner_[1];
      new_dice[2] = inner_[0];
      new_dice[3] = inner_[5];
      new_dice[4] = inner_[4];
      new_dice[5] = inner_[2];
      break;
    }
    inner_ = new_dice;
  }

  int get(int i) {
    return inner_.at(i);
  }

  std::size_t index(int x) {
    auto it = std::find(inner_.begin(), inner_.end(), x);
    return std::distance(inner_.begin(), it);
  }

  int right_side(int top, int front) {
    auto t = index(top);
    auto f = index(front);
    auto side = 3 - std::min(t, 5 - t) - std::min(f, 5 - f);
    return get(f == TABLE[t][0] || f == TABLE[t][1] ? side : 5 - side);
  }

  friend std::ostream &operator<<(std::ostream &out, const Dice &dice) {
    for(int i = 0; i != 5; ++i) {
      out << dice.inner_.at(i) << " ";
    }
    out << dice.inner_.at(5);
    return out;
  }
};

int main() {
  std::string line;
  std::getline(std::cin, line);
  Dice dice(line);

  int n;
  std::getline(std::cin, line);
  std::istringstream stream(line);
  stream >> n;

  for(int i = 0; i != n; ++i) {
    std::getline(std::cin, line);
    int a, b;
    std::istringstream stream(line);
    stream >> a >> b;
    std::cout << dice.right_side(a, b) << std::endl;
  }
  return 0;
}