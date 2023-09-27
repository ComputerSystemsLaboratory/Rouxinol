#include <iostream>
using namespace std;

int main(){
  int n;
  int num;
  string symbol;
  int cards[4][13];
  cin >> n;

  //?????????
  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      cards[i][j] = 0;
    }
  }

  //??¢?´¢
  for(int i=0; i<n; i++){
    cin >> symbol >> num;
    if(symbol == "S"){
      cards[0][num-1] = 1;
    }else if(symbol == "H"){
      cards[1][num-1] = 1;
    }else if(symbol == "C"){
      cards[2][num-1] = 1;
    }else if(symbol == "D"){
      cards[3][num-1] = 1;
    }
  }

  //?¶??????????????????????
  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      if(cards[i][j] == 0){
          if(i == 0){
            cout << "S" << " " << j+1 << endl;
          }else if(i == 1){
            cout << "H" << " " << j+1 << endl;
          }else if(i == 2){
            cout << "C" << " " << j+1 << endl;
          }else if(i == 3){
            cout << "D" << " " << j+1 << endl;
          }
      }
    }
  }


}