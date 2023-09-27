#include<iostream>

using namespace std;

int main(){

  while(1){
    int in;
    cin >> in;
    if(in == 0) break;

    int money = 1000;
    money -= in;

    int sum = 0;

    if(money >= 500){
      sum++;
      money -= 500;
    }

    while(money >= 100){
      sum++;
      money -= 100;
    }

    if(money >= 50){
      sum++;
      money -= 50;
    }

    while(money >= 10){
      sum++;
      money -= 10;
    }

    if(money >= 5){
      sum++;
      money -= 5;
    }

    sum += money;

    cout << sum << endl;

  }

  return 0;
}