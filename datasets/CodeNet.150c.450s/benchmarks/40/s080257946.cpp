#include<iostream>
#include<cstdio>
using namespace std;

class Dice_c{

private:
  int me[4];
  int topbot[2]; // top,bottom

public:
  void Input();
  void Roll(char c);
  void Output();

};


int main(){

  Dice_c dice;
  char com;

  dice.Input();
 
  while(1){
    scanf("%c",&com);

    if(com=='\n')
      break;

    dice.Roll(com);

  }
  
  dice.Output();

  return 0;
}


///////////////////////////////////////




void Dice_c::Input(){

  cin >> me[1] >> topbot[1] >> me[2] >> me[0] >> topbot[0] >> me[3];
  getchar();

}

void Dice_c::Roll(char c){

  int tmp;

  if(c == 'W'){
    tmp = me[0];
    me[0]=me[1] , me[1]=me[2] , me[2]=me[3] , me[3]=tmp;
  }
  else if(c == 'E'){
    tmp = me[3];
    me[3]=me[2] , me[2]=me[1] , me[1]=me[0] , me[0]=tmp;
  }
  else if(c == 'N'){
    tmp = topbot[1];
    topbot[1]=me[3] , me[3]=topbot[0] , topbot[0]=me[1] , me[1]=tmp;
  }
  else{
    tmp = topbot[0];
    topbot[0]=me[3] , me[3]=topbot[1] , topbot[1]=me[1] , me[1]=tmp;
  }

  
  /*
  cout << "  " << topbot[0] << endl;
  for(int i=0; i<4; i++)
    cout << me[i] << ' ';
  cout << endl << "  " << topbot[1] << endl;
  */

}


void Dice_c::Output(){

  cout << me[1] << endl;

}