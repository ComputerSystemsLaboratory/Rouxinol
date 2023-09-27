#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;

  cin>>n;

  int card[4][13] = {};

  for(int i=0; i<n; i++){

    string suit;

    int num;

    cin>>suit>>num;

    if( suit == "S") card[0][num-1] = 1;
    if( suit == "H") card[1][num-1] = 1;
    if( suit == "C") card[2][num-1] = 1;
    if( suit == "D") card[3][num-1] = 1;
  }

  string str[4] = { "S","H","C","D"};
  for (int i=0; i<4; i++){
    for ( int j=0; j<13; j++){
      if (card[i][j] == 1) continue;
      cout<<str[i]<<" "<<j+1<<endl;
    }
  }

  return 0;
}

