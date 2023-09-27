#include <iostream>
#include <string>

using namespace std;

enum Label { LABEL1, LABEL2, LABEL3, LABEL4, LABEL5, LABEL6, INVALID };

enum Direction {
  E,
  N,
  S,
  W,
};

class Dice {
public:
  Dice(int label[6])
      : top_(LABEL1), bottom_(LABEL6), front_(LABEL2), back_(LABEL5),
        right_(LABEL3), left_(LABEL4) {
    for (int i = 0; i < 6; ++i) {
      label_[i] = label[i];
    }
  }

  void north() {
    Label tmp = top_;
    top_ = front_;
    front_ = bottom_;
    bottom_ = back_;
    back_ = tmp;
  }

  void south() {
    Label tmp = top_;
    top_ = back_;
    back_ = bottom_;
    bottom_ = front_;
    front_ = tmp;
  }

  void east() {
    Label tmp = top_;
    top_ = left_;
    left_ = bottom_;
    bottom_ = right_;
    right_ = tmp;
  }

  void west() {
    Label tmp = top_;
    top_ = right_;
    right_ = bottom_;
    bottom_ = left_;
    left_ = tmp;
  }

  void roll(char ch) {
    Direction direction;
    switch (ch) {
    case 'E':
      east();
      break;
    case 'N':
      north();
      break;
    case 'S':
      south();
      break;
    case 'W':
      west();
      break;
    default:
      break;
    }
  }

  int getTop() { return label_[top_]; }

  int getRight(int topNumber, int frontNumber) {
    Label top = toLabel(topNumber);
    Label front = toLabel(frontNumber);
    Label anser[6][6] = {
        // front
        // 1      2       3       4       5       6
        {INVALID, LABEL3, LABEL5, LABEL2, LABEL4, INVALID}, // 1 top
        {LABEL4, INVALID, LABEL1, LABEL6, INVALID, LABEL3}, // 2
        {LABEL2, LABEL6, INVALID, INVALID, LABEL1, LABEL5}, // 3
        {LABEL5, LABEL1, INVALID, INVALID, LABEL6, LABEL2}, // 4
        {LABEL3, INVALID, LABEL6, LABEL1, INVALID, LABEL4}, // 5
        {INVALID, LABEL4, LABEL2, LABEL5, LABEL3, INVALID}, // 6
    };
    Label anserLabel = anser[top][front];
    return label_[anserLabel];
  }

private:
  Label toLabel(int number) {
    for (int i = 0; i < 6; ++i) {
      if (number == label_[i]) {
        return static_cast<Label>(i);
      }
    }
    return INVALID;
  }
  int label_[6];
  Label top_;
  Label bottom_;
  Label front_;
  Label back_;
  Label right_;
  Label left_;
};

int main() {
  int label[6];
  for (int i = 0; i < 6; ++i) {
    cin >> label[i];
  }
  Dice dice(label);

  int q;
  cin >> q;
  for (int i = 0; i < q; ++i) {
    int top, front;
    cin >> top >> front;
    cout << dice.getRight(top, front) << endl;
  }

  return 0;
}

