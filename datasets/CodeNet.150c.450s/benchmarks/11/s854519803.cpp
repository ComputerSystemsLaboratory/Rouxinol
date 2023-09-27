#include <iostream>
#include <string>
using namespace std;

char intToSuit(int i){
  char buf;

  switch(i){
  case 0:
    buf='S';
    break;
  case 1:
    buf='H';
    break;
  case 2:
    buf='C';
    break;
  case 3:
    buf='D';
    break;
  }
  return buf;
}

int suitToInt(char c){
  int buf;

  switch(c){
  case 'S':
    buf=0;
    break;
  case 'H':
    buf=1;
    break;
  case 'C':
    buf=2;
    break;
  case 'D':
    buf=3;
    break;
  }
  return buf;
}


int main(){
  bool card[4][13]={false};
  int n;
  char s_buf;
  int n_buf;

  cin >> n;
  
  for(int i=0;i<n;i++){
    cin >> s_buf;
    cin >> n_buf;
    card[suitToInt(s_buf)][n_buf-1]=true;
  }

  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      if(card[i][j] == false){
        cout << intToSuit(i) << " " << j+1 << endl;
      }
    }
  }
  
  return 0;
}