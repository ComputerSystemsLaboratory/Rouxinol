#include <iostream>
using namespace std;

int main(){
  int n;
  char suits[4]={'S','H','C','D'};
  char suit;
  int num;
  int cards[4][13]={{}};

  cin >> n;
  for(int i=0; i<n; i++){
      cin >> suit >> num;
      if(suit=='S') cards[0][num-1]=1;
      else if(suit=='H') cards[1][num-1]=1;
      else if(suit=='C') cards[2][num-1]=1;
      else if(suit=='D') cards[3][num-1]=1;
  }

  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      if(cards[i][j]==0){
        cout << suits[i] << " " << j+1 << endl;
      }
    }
  }
}

