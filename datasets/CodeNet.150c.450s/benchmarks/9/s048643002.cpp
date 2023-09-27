#include<iostream>
#include<string>
using namespace std;

int main(){
  string card,tmp;
  int h,shu;
  while(1){
    cin >> card;
    if(card == "-") break;
    cin >> h;
    for(int i=0;i<h;i++){
      cin >> shu;
      tmp = card.substr(0,shu);
      card.erase(0,shu);
      card += tmp;
    }
    cout << card << endl;
  }
}
  