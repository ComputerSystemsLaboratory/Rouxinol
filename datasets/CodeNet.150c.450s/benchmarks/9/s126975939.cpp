#include<iostream>
#include<string>
using namespace std;

int main(){

  string cards;
  string buf;
  int h,n;
  int i;

  while(1){
    cin >> cards;

    if(cards == "-"){
      break;
    }

    cin >> n;
    for(i = 0; i < n;i++){
      cin >> h;
      buf = cards.substr(0,h);
      cards += buf;
      cards.erase(cards.begin(),cards.begin()+h);
    }
    cout << cards << endl;
  }

return 0;



}