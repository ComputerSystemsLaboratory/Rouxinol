#include <iostream>
#include <string>
using namespace std;

int n;
string mark;
int index_x;
int num;
int cards[4][13];

int main() {
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> mark >> num;
    if(mark == "S"){
      index_x = 0;
    }else if(mark == "H"){
      index_x = 1;
    }else if(mark == "C"){
      index_x = 2;
    }else{
      index_x = 3;
    }
    cards[index_x][num-1] = 1;
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      if(cards[i][j] != 1){
        if(i == 0){
          cout << "S ";
        }else if(i == 1){
          cout << "H ";
        }else if(i == 2){
          cout << "C ";
        }else{
          cout << "D ";
        }
        cout << j+1 << endl;
      }
    }
  }
}