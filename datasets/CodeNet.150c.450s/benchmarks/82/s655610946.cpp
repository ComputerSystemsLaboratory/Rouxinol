#include<iostream>
using namespace std;

class Dice {
private:
    int num[6];
    int top;
    int side_n;
    int side_e;

public:
    Dice(int *num);
    void Roll(char dir);
    int getNum(char dir);
};

Dice::Dice(int *num)
{
    for (int i = 0; i < 6; i++) this->num[i] = num[i];
    top = 1;
    side_n = 5;
    side_e = 3;
}
int Dice::getNum(char dir)
{
    int pos;
    
    switch (dir) {
        case 'T': pos = top; break;
        case 'B': pos = 7 - top; break;
        case 'N': pos = side_n; break;
        case 'E': pos = side_e; break;
        case 'W': pos = 7 - side_e; break;
        case 'S': pos = 7 - side_n; break;
        default : break;
    }
    return num[pos-1];
}
void Dice::Roll(char dir)
{
    int tmp;
    
    switch (dir) {
        case 'N': tmp = top; top = 7-side_n; side_n = tmp; break;
        case 'E': tmp = top; top = 7-side_e; side_e = tmp; break;
        case 'W': tmp = top; top = side_e; side_e = 7-tmp; break;
        case 'S': tmp = top; top = side_n; side_n = 7-tmp; break;
        case 'R': tmp = side_n; side_n = 7-side_e; side_e = tmp; break;
        case 'L': tmp = side_e; side_e = 7-side_n; side_n = tmp; break;
        default : break;
    }
}

int main()
{
  int a[6];
  int n;
  int top, front;
  int count;
  
  for (int i = 0; i < 6; i++) cin >> a[i];
  Dice dice(a);
  cin >> n;
  for (int i = 0; i < n; i++) {
      cin >> top >> front;
      count = 0;
      while (dice.getNum('T') != top) {
          dice.Roll(count % 2 == 0 ? 'N' : 'E');
          count++;
      }
      count = 0;
      while (dice.getNum('S') != front) {
          dice.Roll('R');
          count++;
      }
      cout << dice.getNum('E') << endl;
  }

  return 0;
}

