#include <iostream>
#include <string>
using namespace std;

string mark[4] = {"S", "H", "C", "D"};

int n;
string m;
int num;
int cards[4][13];

int main() {
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> m >> num;
    if(m == "S")      cards[0][num-1] = 1;
    else if(m == "H") cards[1][num-1] = 1;
    else if(m == "C") cards[2][num-1] = 1;
    else if(m == "D") cards[3][num-1] = 1;
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++){
      if(cards[i][j] != 1){
        cout << mark[i] << " " <<  j+1 << endl;
      }
    }
  }
}