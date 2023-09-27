#include <iostream>
#include <string>
using namespace std;

int main(){
  string cards;
  string ans;

  while(1){
  cin >> cards;
  if(cards[0]=='-'){
    break;
  }

  int m;

  cin >> m;

  for(int i=1; i<= m; i++){
    int h;
    cin >> h;
    
  string  s = cards.substr(0,h);
  // cout << s << '1' << endl;
  string f = cards.erase(0,h);
  // cout << f << '2' << endl;
   cards= f+s; 
   // cout << cards << '3' << endl;

      // s.erase(s.begin()+1,s.begin()+h);
    //  strcpy(s, cards);
    // strncat(s, cards, h);
    // s.erase(1,h);
  }

  cout << cards << endl;

  }

  return 0;
}