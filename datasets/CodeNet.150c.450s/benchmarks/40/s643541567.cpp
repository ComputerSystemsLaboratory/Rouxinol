#include <iostream>
#include <string>
using namespace std;

class Dice {
  private:
    int *numbers;
  public:
    Dice(int *numbers) {
      this->numbers = numbers;
    }

    int getCurrentNumber() {
      return this->numbers[0];
    }

    void turn(char direction) {
      switch (direction) {
        case 'N':
          this->turnNorth();
          break;
        case 'S':
          this->turnSouth();
          break;
        case 'E':
          this->turnEast();
          break;
        case 'W':
          this->turnWest();
          break;
      }
    }

    void turnNorth() {
      swap(this->numbers[0], this->numbers[1]);
      swap(this->numbers[1], this->numbers[5]);
      swap(this->numbers[5], this->numbers[4]);
    }

    void turnSouth() {
      swap(this->numbers[0], this->numbers[4]);
      swap(this->numbers[4], this->numbers[5]);
      swap(this->numbers[5], this->numbers[1]);
    }

    void turnEast() {
      swap(this->numbers[0], this->numbers[3]);
      swap(this->numbers[3], this->numbers[5]);
      swap(this->numbers[5], this->numbers[2]);
    }

    void turnWest() {
      swap(this->numbers[0], this->numbers[2]);
      swap(this->numbers[2], this->numbers[5]);
      swap(this->numbers[5], this->numbers[3]);
    }
};

int main() {
  int numbers[6];
  char direction;
  string directions;

  for (int i = 0; i < 6; i++) {
    cin >> numbers[i];
  }
  cin >> directions;

  Dice dice(numbers);
  for (int i = 0; i < directions.size(); i++) {
    dice.turn(directions[i]);
  }

  cout << dice.getCurrentNumber() << endl;

  return 0;
}