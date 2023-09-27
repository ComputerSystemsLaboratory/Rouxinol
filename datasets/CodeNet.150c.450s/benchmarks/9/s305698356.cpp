#include<iostream>
#include<string>
using namespace std;

int main(){
  string cards,mae,usiro;
  int num; 
  int times;
  
  while (1) {
    cin >> cards;
    if (cards == "-") break;
    cin >> times;
    while (times) {
      times--;
      cin >> num;
      mae = cards.substr(0,num); //[0]からnum個を返す
      //cout << mae << endl;
      usiro = cards.substr(num,cards.size());
      //cout << usiro << endl;
      cards.replace(0,cards.size()-num,usiro);
      cards.replace(cards.size()-num,cards.size(),mae);
      
    }
    cout << cards << endl;
  }
  return 0;
}
