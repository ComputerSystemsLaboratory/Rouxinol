#include <iostream>
using namespace std;

void ANS(int X,char C){
  for(int i=1;i<=13;i++){
   if((X & (0b1 << i))==0) cout << C << ' ' << i << endl;
  }
}

int main(){
  char mark;
  int n,S=0,H=0,C=0,D=0,num;
  cin >> n;

  for(int i=0;i<n;i++){
    cin >> mark >> num;
    switch(mark){
    case 'S':
      S+= 0b1 << num;
      break;
    case 'H':
      H+= 0b1 << num;
      break;
    case 'C':
      C+= 0b1 << num;
      break;
    case 'D':
      D+= 0b1 << num;
      break;
    }
  }
  ANS(S,'S');
  ANS(H,'H');
  ANS(C,'C');
  ANS(D,'D');
}
