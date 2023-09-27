#include <iostream>
using namespace std;

void dicemove(int);

typedef struct {
  int up;
  int back;
  int right;
  int left;
  int front;
  int down;
}dicetype;

dicetype dice;

#define FRONT 0
#define BACK  1
#define RIGHT 2
#define LEFT  3
#define CLOCK 4
#define COUNTERCLOCK 5

int main(void){

  int qnum;
  int up_num;
  int back_num;

  cin >> dice.up >> dice.back >> dice.right >> dice.left >> dice.front >> dice.down;
  cin >> qnum;

  for ( int i = 0 ; i < qnum ; i++){
    cin >> up_num >> back_num;

    //?????¢??????
    if(up_num == dice.left){
      dicemove(RIGHT);
    }else if(up_num == dice.right){
      dicemove(LEFT);
    }else if(up_num == dice.back){
      dicemove(FRONT);
    }else if(up_num == dice.front){
      dicemove(BACK);
    }else if(up_num == dice.down){
      dicemove(LEFT);
      dicemove(LEFT);
    }else{
      //Do Nothing
    }

    if(back_num == dice.left){
      dicemove(COUNTERCLOCK);
    }else if(back_num == dice.right){
      dicemove(CLOCK);
    }else if(back_num == dice.front){
      dicemove(CLOCK);
      dicemove(CLOCK);
    }else{
      //Do Nothing
    }

    cout << dice.right << endl;

  }

  return 0;

}

void dicemove(int dir){

  switch(dir){

    int temp;

    case FRONT:
    temp = dice.up;
    dice.up = dice.back;
    dice.back = dice.down;
    dice.down = dice.front;
    dice.front = temp;
    break;

    case BACK:
    temp = dice.up;
    dice.up = dice.front;
    dice.front = dice.down;
    dice.down = dice.back;
    dice.back = temp;
    break;

    case RIGHT:
    temp = dice.up;
    dice.up = dice.left;
    dice.left = dice.down;
    dice.down = dice.right;
    dice.right = temp;
    break;

    case LEFT:
    temp = dice.up;
    dice.up = dice.right;
    dice.right = dice.down;
    dice.down = dice.left;
    dice.left = temp;
    break;

    case CLOCK:
    temp = dice.back;
    dice.back = dice.right;
    dice.right = dice.front;
    dice.front = dice.left;
    dice.left = temp;
    break;

    case COUNTERCLOCK:
    temp = dice.back;
    dice.back = dice.left;
    dice.left = dice.front;
    dice.front = dice.right;
    dice.right = temp;
    break;

    default:
    break;
  }
}