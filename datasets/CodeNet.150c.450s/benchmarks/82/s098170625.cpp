#include <iostream>
#include <vector>
using namespace std;

class Dice
{
private:
  vector<int> dice;

public : Dice(vector<int> num) {
    for (int i = 0; i < (int)num.size(); ++i) {
      dice.push_back(num.at(i));
    }
  }

  int getDiceRightNum(int top, int forward) {
    int right = 0;
    for(int i = 0; i < (int)dice.size(); ++i){
      for(int j = 0; j < (int)dice.size(); ++j){
        if (dice.at(i) == top && dice.at(j) == forward) {
          if(i == 0 && j == 1) right = dice.at(2);
          if(i == 0 && j == 2) right = dice.at(4);
          if(i == 0 && j == 4) right = dice.at(3);
          if(i == 0 && j == 3) right = dice.at(1);
          if(i == 1 && j == 0) right = dice.at(3);
          if(i == 1 && j == 3) right = dice.at(5);
          if(i == 1 && j == 5) right = dice.at(2);
          if(i == 1 && j == 2) right = dice.at(0);
          if(i == 2 && j == 0) right = dice.at(1);
          if(i == 2 && j == 1) right = dice.at(5);
          if(i == 2 && j == 5) right = dice.at(4);
          if(i == 2 && j == 4) right = dice.at(0);
          if(i == 3 && j == 0) right = dice.at(4);
          if(i == 3 && j == 4) right = dice.at(5);
          if(i == 3 && j == 5) right = dice.at(1);
          if(i == 3 && j == 1) right = dice.at(0);
          if(i == 4 && j == 0) right = dice.at(2);
          if(i == 4 && j == 2) right = dice.at(5);
          if(i == 4 && j == 5) right = dice.at(3);
          if(i == 4 && j == 3) right = dice.at(0);
          if(i == 5 && j == 1) right = dice.at(3);
          if(i == 5 && j == 3) right = dice.at(4);
          if(i == 5 && j == 4) right = dice.at(2);
          if(i == 5 && j == 2) right = dice.at(1);
        }
      }
    }
    return right;
  }
};

int main(int argc, char *argv[])
{
  vector<int> num(6);
  int q, a, b;
  for(int i = 0; i < 6; ++i){
    cin >> num.at(i);
  }
  Dice dice(num);
  cin >> q;
  for (int j = 0; j < q; ++j) {
    cin >> a >> b;
    cout << dice.getDiceRightNum(a, b) << endl;
  }

  return 0;
}

