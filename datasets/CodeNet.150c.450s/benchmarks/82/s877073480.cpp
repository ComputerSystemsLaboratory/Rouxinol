#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Dice
{
private:
  int surf[6];
public:
  void set_surf(int* input);
  void roll(char orient);
  void disp_top();
  void disp_right(int tp, int fw);
};

void Dice::set_surf(int* input)
{
  memcpy(surf, input, 6*sizeof(int));
}

void Dice::roll(char orient){
  int temp[6];
  
  switch(orient){
  case 'S':
    temp[0]=surf[4];
    temp[1]=surf[0];
    temp[2]=surf[2];
    temp[3]=surf[3];
    temp[4]=surf[5];
    temp[5]=surf[1];
    break;
  case 'N':
    temp[0]=surf[1];
    temp[1]=surf[5];
    temp[2]=surf[2];
    temp[3]=surf[3];
    temp[4]=surf[0];
    temp[5]=surf[4];
    break;
  case 'W':
    temp[0]=surf[2];
    temp[1]=surf[1];
    temp[2]=surf[5];
    temp[3]=surf[0];
    temp[4]=surf[4];
    temp[5]=surf[3];
    break;
  case 'E':
    temp[0]=surf[3];
    temp[1]=surf[1];
    temp[2]=surf[0];
    temp[3]=surf[5];
    temp[4]=surf[4];
    temp[5]=surf[2];
    break;
  }

  memcpy(surf, temp, 6*sizeof(int));
  
}

void Dice::disp_top(){
  cout << surf[0] << endl;
}

void Dice::disp_right(int tp, int fw){
  int index_tp, index_fw;
  int right[6][4][2] = {
    { {1, 2}, {2, 4}, {4, 3}, {3, 1} },
    { {0, 3}, {3, 5}, {5, 2}, {2, 0} },
    { {0, 1}, {1, 5}, {5, 4}, {4, 0} },
    { {0, 4}, {4, 5}, {5, 1}, {1, 0} },
    { {0, 2}, {2, 5}, {5, 3}, {3, 0} },
    { {1, 3}, {3, 4}, {4, 2}, {2, 1} }
  };
  
  for(int i=0; i<6; i++){
    if(surf[i] == tp){
      index_tp = i;
    }
    if(surf[i] == fw){
      index_fw = i;
    }
  }
  
  for(int i=0; i<4; i++){
    if(right[index_tp][i][0] == index_fw){
      cout << surf[right[index_tp][i][1]] << endl;
    }
  }


}

int main()
{
  int input[6], n;
  Dice dice;
  string order;
  
  for(int i=0; i<6; i++){
    cin >> input[i];
  }
  dice.set_surf(input);
  
  cin >> n;

  for(int i=0; i<n; i++){
    int tp, fw;
    cin >> tp >> fw;
    dice.disp_right(tp, fw);
  }
  
  return(0);
}