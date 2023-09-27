#include<iostream>
using namespace std;

int main(){
  int n,i,j,k,num;
  int cards[4][14] = {0};
  char mark;

  cin >> n;

  for(k = 0; k < n; k++){
    cin >> mark >> num;

    if(mark == 'S') cards[0][num] = 1;
    if(mark == 'H') cards[1][num] = 1;
    if(mark == 'C') cards[2][num] = 1;
    if(mark == 'D') cards[3][num] = 1;
  }

  for(i = 0; i < 4; i++){
    for(j = 1; j <= 13; j++){
      if(cards[i][j] == 0){
        if(i == 0) cout << 'S' << " " << j << endl;
        if(i == 1) cout << 'H' << " " << j << endl;
        if(i == 2) cout << 'C' << " " << j << endl;
        if(i == 3) cout << 'D' << " " << j << endl;
      }
    }
  }
  return 0;
}