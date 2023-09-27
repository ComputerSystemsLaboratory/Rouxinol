#include <iostream>

using namespace std;

int main() {

  int value,change;
  int coins;


  while(1) {

    cin >> value;

    if(value==0) break;

    coins=0;
    change=1000-value;

    coins+=change/500;
    change%=500;

    coins+=change/100;
    change%=100;

    coins+=change/50;
    change%=50;

    coins+=change/10;
    change%=10;

    coins+=change/5;
    change%=5;

    coins+=change/1;
    change%=1;

    cout << coins << endl;

  }

  return 0;

}