#include <iostream>
#include <string>
using namespace std;

class Dice{
  public:
    int face[6];
    int temp;

  Dice(int f[6]){
    for(int i = 0; i < 6; i++){
      face[i] = f[i];
    }
  }

  void north(){
    temp = face[0];
    face[0] = face[1];
    face[1] = face[5];
    face[5] = face[4];
    face[4] = temp;
  }

  void south(){
    temp = face[0];
    face[0] = face[4];
    face[4] = face[5];
    face[5] = face[1];
    face[1] = temp;
  }

  void west(){
    temp = face[0];
    face[0] = face[2];
    face[2] = face[5];
    face[5] = face[3];
    face[3] = temp;
  }

  void east(){
    temp = face[0];
    face[0] = face[3];
    face[3] = face[5];
    face[5] = face[2];
    face[2] = temp;
  }

  void roll(char order){
    if(order == 'N') north();
    if(order == 'S') south();
    if(order == 'W') west();
    if(order == 'E') east();
  }

  void spin(){
    temp = face[1];
    face[1] = face[2];
    face[2] = face[4];
    face[4] = face[3];
    face[3] = temp;
  }

  void rightSide(int top, int front){
    string findTop = "NNNWNNN";
    for(int i = 0; i < 7; i++){
      if(face[0] == top) break;
      roll(findTop[i]);
    }
    while(face[1] != front){
      spin();
    }
    cout << face[2] << endl;
  }
};

int main(){
  int input[6], n, top, front;

  for(int i = 0; i < 6; i++){
    cin >> input[i];
  }
  Dice dice(input);
  cin >> n;
  while(n--){
    cin >> top >> front;
    dice.rightSide(top, front);
  }
}