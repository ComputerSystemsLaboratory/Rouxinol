#include<iostream>
#include<string>
using namespace std;

int main(){
  string cards;
  string str1, str2;
  int m,h;

  for (;;){
    cin >> cards;
    if (cards == "-") break;

    cin >> m;

    for (int i = 0; i < m; i++){
      cin >> h;
      str1 = cards.substr(0,h);
      str2 = cards.substr(h,cards.size());
      cards = str2 + str1;
    }
    cout << cards << endl;
  }

  return 0;
}