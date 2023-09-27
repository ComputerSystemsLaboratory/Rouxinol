#include <iostream>
#include <stdio.h>
using namespace std;

class Dice{
public:
  int value[6];
  void roll(char _order) {
    switch(_order) {
    case 'N':
      swap(value[4], value[0]);
      swap(value[0], value[1]);
      swap(value[1], value[5]);
      break;
    case 'E':
      swap(value[2], value[0]);
      swap(value[0], value[3]);
      swap(value[3], value[5]);
      break;
    case 'S':
      swap(value[1], value[0]);
      swap(value[0], value[4]);
      swap(value[4], value[5]);
      break;
    case 'W':
      swap(value[0], value[2]);
      swap(value[2], value[5]);
      swap(value[5], value[3]);
      break;
    }
  }
  int right(int top, int front) {
    int top_idx, front_idx;
    for (int i=0;i<6;i++)
      for (int j=0;j<6;j++)
        if (i != j && value[i] == top && value[j] == front) {
          top_idx = i;
          front_idx = j;
        }
    switch (top_idx) {
    case 0:
      switch (front_idx) {
      case 1: return value[2]; break;
      case 2: return value[4]; break;
      case 4: return value[3]; break;
      case 3: return value[1]; break;
      }
      break;
    case 1:
      switch (front_idx) {
      case 0: return value[3]; break;
      case 3: return value[5]; break;
      case 5: return value[2]; break;
      case 2: return value[0]; break;
      }
      break;
    case 2:
      switch (front_idx) {
      case 0: return value[1]; break;
      case 1: return value[5]; break;
      case 5: return value[4]; break;
      case 4: return value[0]; break;
      }
      break;
    case 3:
      switch (front_idx) {
      case 0: return value[4]; break;
      case 4: return value[5]; break;
      case 5: return value[1]; break;
      case 1: return value[0]; break;
      }
      break;
    case 4:
      switch (front_idx) {
      case 0: return value[2]; break;
      case 2: return value[5]; break;
      case 5: return value[3]; break;
      case 3: return value[0]; break;
      }
      break;
    case 5:
      switch (front_idx) {
      case 1: return value[3]; break;
      case 3: return value[4]; break;
      case 4: return value[2]; break;
      case 2: return value[1]; break;
      }
      break;
  }
  }
};

int main() {
  Dice dice;
  int q;
  for (int i=0;i<6;i++)
    cin >> dice.value[i];
  cin >> q;
  for (int i=0;i<q;i++) {
    int top, front;
    cin >> top >> front;
    cout << dice.right(top, front) << endl;
  }
}

