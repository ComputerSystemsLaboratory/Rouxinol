#include<stdio.h>

class Dice {
public:
  void scan();
  int up();
  int front();
  int right();
  int left();
  int back();
  int down();
  void up(int x);
  void front(int x);
  void right(int x);
  void left(int x);
  void back(int x);
  void down(int x);
  void go(char dir);
private:
  int face[6];
};

int main(void)
{
  char dir;
  Dice dice;
  
  dice.scan();

  while ( (dir=getchar()) != EOF) {
    dice.go(dir);
  }

  printf("%d\n", dice.up());
  return 0;
}


void Dice::scan() {
  for ( int i=0; i<6; ++i)
    scanf("%d", &this->face[i]);
  getchar();
}
int Dice::up()    { return this->face[0];}
int Dice::front() { return this->face[1];}
int Dice::right() { return this->face[2];}
int Dice::left()  { return this->face[3];}
int Dice::back()  { return this->face[4];}
int Dice::down()  { return this->face[5];}
void Dice::up(int x)    { this->face[0] = x;}
void Dice::front(int x) { this->face[1] = x;}
void Dice::right(int x) { this->face[2] = x;}
void Dice::left(int x)  { this->face[3] = x;}
void Dice::back(int x)  { this->face[4] = x;}
void Dice::down(int x)  { this->face[5] = x;}
void Dice::go(char dir) {
  int tmp;
  switch (dir) {
  case 'E':
    tmp = this->up();
    this->up(this->left());
    this->left(this->down());
    this->down(this->right());
    this->right(tmp);
    break;
  case 'N':
    tmp = this->up();
    this->up(this->front());
    this->front(this->down());
    this->down(this->back());
    this->back(tmp);
    break;
  case 'S':
    tmp = this->up();
    this->up(this->back());
    this->back(this->down());
    this->down(this->front());
    this->front(tmp);
    break;
  case 'W':
    tmp = this->up();
    this->up(this->right());
    this->right(this->down());
    this->down(this->left());
    this->left(tmp);
    break;
  }
}

