#include<iostream>
using namespace std;

int main(){
  int cards[4][14], limit, number, index;
  char mark;

  cin >> limit;

  for(int j = 0; j < 4; j++){
    for(int k = 1; k < 14; k++){
      cards[j][k] = false;
    }
  }

  for(int i = 0; i < limit; i++){
    cin >> mark >> number;

    if( mark == 'S') cards[0][number] = true;
    if( mark == 'H') cards[1][number] = true;
    if( mark == 'C') cards[2][number] = true;
    if( mark == 'D') cards[3][number] = true;
  }

  for(int j = 0; j < 4; j++){
    for(int k = 1; k < 14; k++){
      if(cards[j][k]) continue;
      if(j == 0) cout << 'S' << ' ' << k << endl;
      if(j == 1) cout << 'H' << ' ' << k << endl;
      if(j == 2) cout << 'C' << ' ' << k << endl;
      if(j == 3) cout << 'D' << ' ' << k << endl;
    }
  }
  return 0;
}