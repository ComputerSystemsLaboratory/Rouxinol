#include<iostream>
using namespace std;

int main() {

  char ch;
  int n, i, s, t, rank;
  int card[4][14]={};  //??????????????????
  
  cin >> n;

  for(i=0; i<n; i++){
      cin >> ch >> rank;
      if(ch == 'S') card[0][rank] = 1;
      if(ch == 'H') card[1][rank] = 1;
      if(ch == 'C') card[2][rank] = 1;
      if(ch == 'D') card[3][rank] = 1;
  }

  for(s=0; s<4; s++){
    for(t=1; t<14; t++){
      if(card[s][t]) continue; //?????????????????¨????????°???????????????
      if(s==0) ch = 'S';
      if(s==1) ch = 'H';
      if(s==2) ch = 'C';
      if(s==3) ch = 'D';
      cout << ch << " " << t << endl;
    }
  }

  return 0;
  
}