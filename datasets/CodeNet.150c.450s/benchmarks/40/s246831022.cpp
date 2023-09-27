#include <iostream>

using namespace std;

class Dice{
private:
  int D1;
  int D2;
  int D3;
  int D4;
  int D5;
  int D6;

public:
  Dice(int d1,int d2,int d3,int d4,int d5,int d6){
  D1=d1;
  D2=d2;
  D2=d2;
  D3=d3;
  D4=d4;
  D5=d5;
  D6=d6;
  }

  void roll(char dire){
  int dd1=D1;
  int dd2=D2;
  int dd3=D3;
  int dd4=D4;
  int dd5=D5;
  int dd6=D6;
  
  if(dire=='E')
    {
    D1=dd4;
    D3=dd1;
    D4=dd6;
    D6=dd3;
    }
  if(dire=='N')
  {
    D1=dd2;
    D2=dd6;
    D5=dd1;
    D6=dd5;
  }
  if(dire=='S')
  {
    D1=dd5;
    D5=dd6;
    D6=dd2;
    D2=dd1;
  }
  if(dire=='W')
  {
    D1=dd3;
    D3=dd6;
    D6=dd4;
    D4=dd1;
  }
  
  }
  
  int ue(){
  return D1;
  }
};

int main()
{
  int di[6]={};
  int i;
  string direc;
  
  for(i=0;i<6;i++)
    cin >> di[i];
    
  Dice dice1(di[0],di[1],di[2],di[3],di[4],di[5]);
  
  cin >> direc;
  
  for(i=0;direc[i]!='\0';i++)
  {
    dice1.roll(direc[i]);
  }
  
  cout << dice1.ue() <<"\n";
}