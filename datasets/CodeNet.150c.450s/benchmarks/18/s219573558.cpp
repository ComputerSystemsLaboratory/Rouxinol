#include <iostream>

using namespace std;

int main(){
  int i;
  int money = 100000;

  cin >> i;

  int cutoff = 1000;

  double dif;
  for(; i > 0; i--){
    money += money*0.05;
    dif = ((int)money/cutoff)*cutoff;
    if(money - dif > 0){
      money = dif + cutoff;
    }
  }

  cout << money << endl;
}