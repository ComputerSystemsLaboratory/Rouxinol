#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  int money = 100000, weeks;
  cin >> weeks;
  for(int i = 0; i < weeks; i++){
    money += (money / 100) * 5;
    int underTp = money % 1000;
    if(underTp != 0){
      money -= underTp;
      money += 1000;
    }
  }
  cout << money << endl; 
  return 0;
}