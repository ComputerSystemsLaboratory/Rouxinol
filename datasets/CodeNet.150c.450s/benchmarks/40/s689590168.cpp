#include <iostream>
using namespace std;

void swap(int a, int b){
  int tmp;
  tmp = b;
  b = a;
  a = tmp;
}

class Dice
{
private:
  int d[6];
public:
  Dice();
  void CreateDice(int n1, int n2, int n3, int n4, int n5, int n6);
  void disp();
  void Roll_The_Dice(char order);
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
  // for(int i = 0; i < 6; i++){
  //   cout << d[i] << " ";
  // }
  cout << d[0] <<endl;
}

void Dice::Roll_The_Dice(char order){
  int tmp;
  if(order == 'S'){
    tmp = d[0];
    d[0] = d[4];
    d[4] = d[5];
    d[5] = d[1];
    d[1] = tmp;
  } else if(order == 'W'){
    tmp = d[0];
    d[0] = d[2];
    d[2] = d[5];
    d[5] = d[3];
    d[3] = tmp;
  } else if(order == 'E'){
    tmp = d[0];
    d[0] = d[3];
    d[3] = d[5];
    d[5] = d[2];
    d[2] = tmp;
  } else if(order == 'N'){
    tmp = d[0];
    d[0] = d[1];
    d[1] = d[5];
    d[5] = d[4];
    d[4] = tmp;
  }
}

int main(){
  int n[6];
  string order;
  for(int i = 0; i < 6; i++){
    cin >> n[i];
  }
  Dice dice1;
  dice1.CreateDice(n[0],n[1],n[2],n[3],n[4],n[5]);
  cin >> order;
  for(int j = 0; j < order.length(); j++){
    char s = order[j];
    dice1.Roll_The_Dice(s);
  }
  dice1.disp();
}

