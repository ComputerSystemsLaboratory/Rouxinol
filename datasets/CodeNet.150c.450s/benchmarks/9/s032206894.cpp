#include<iostream>
#include<string>

using namespace std;

int main(){
  string card;

  cin >> card;
  while(card!="-"){
    int m;

    cin >> m;

    int h;

    for(int i=0;i<m;i++){
      cin >> h;
      for(int j=0;j<h;j++){
        card+=card[0];
        card.erase(card.begin());
      }
    }

    cout << card << endl;
    cin >> card;
  }
  return 0;
}