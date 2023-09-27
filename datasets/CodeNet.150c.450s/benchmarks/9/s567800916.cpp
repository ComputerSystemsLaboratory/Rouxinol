#include<iostream>
#include <string>
using namespace std;


int main(){
  string cards;
  int times, h;

  while(true){
    cin >> cards;
    if(cards == "-") break;

    cin >> times;
    for(int i = 0; i < times; i++){
      cin >> h;
      cards = cards.substr(h) + cards.substr(0, h);
    }

    cout << cards << endl;
  }

  return 0;
}