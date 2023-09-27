#include <iostream>
using namespace std;

class Dice
{
private:
  int d[6];
public:
  Dice();
  void CreateDice(int n1, int n2, int n3, int n4, int n5, int n6);
  void disp();
  void Roll_The_Dice(int top, int front);
};

Dice::Dice(){
  for(int i = 0; i < 6; i++){
    d[i] = 0;
  }
}

void Dice::CreateDice(int n1, int n2, int n3, int n4, int n5, int n6){
  d[0] = n1;
  d[1] = n2;
  d[2] = n3;
  d[3] = n4;
  d[4] = n5;
  d[5] = n6;
}

void Dice::disp(){
  cout << d[2] << endl;
}

void Dice::Roll_The_Dice(int top, int front){
  int tmp;
  int i = 0;
  while(true){
    for(i = 0; i < 4; i++){
      if(d[0] == top){
        break;
      }
      tmp  = d[0];
      d[0] = d[4];
      d[4] = d[5];
      d[5] = d[1];
      d[1] = tmp;
    }
    if(d[1] == front && d[0] == top){
      break;
    }
    tmp  = d[3];
    d[3] = d[1];
    d[1] = d[2];
    d[2] = d[4];
    d[4] = tmp;
    i = 0;
  }
}

int main(){
  int n[6] ,num;
  int top,front;
  string order;
  for(int i = 0; i < 6; i++){
    cin >> n[i];
  }
  Dice dice1;
  dice1.CreateDice(n[0],n[1],n[2],n[3],n[4],n[5]);
  cin >> num;
  for(int j = 0; j < num; j++){
    cin >> top >> front;
    dice1.Roll_The_Dice(top,front);
    dice1.disp();
  }
}

