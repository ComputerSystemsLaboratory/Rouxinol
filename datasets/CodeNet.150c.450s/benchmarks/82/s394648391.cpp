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

    int getRightNumberFrom(int top, int front) {
      int rightIndexes[6][6] = {
        { -1, 2, 4, 1, 3, -1 },
        { 3, -1, 0, 5, -1, 2 },
        { 1, 5, -1, -1, 0, 4 },
        { 4, 0, -1, -1, 5, 1 },
        { 2, -1, 5, 0, -1, 3 },
        { -1, 3, 1, 4, 2, -1 }
      };
      int topIndex, frontIndex;
      for(int i = 0; i < 6; i++) {
        if (this->numbers[i] == top) topIndex = i;
        if (this->numbers[i] == front) frontIndex = i;
      }
      return this->numbers[rightIndexes[topIndex][frontIndex]];
    }
};

int main() {
  int numbers[6], n, top, front;
  int ans[24];

  for (int i = 0; i < 6; i++) {
    cin >> numbers[i];
  }
  cin >> n;
  Dice dice(numbers);
  for (int i = 0; i < n; i++) {
    cin >> top >> front;
    ans[i] = dice.getRightNumberFrom(top, front);
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}