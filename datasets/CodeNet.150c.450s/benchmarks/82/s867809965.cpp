#include <iostream>
#include <string>

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
  
  int light(int up,int mae){
    int i;
    int j;
    int k;
    int l;
      for(i=0;i<4;i++)
      {
      roll('E');
     for(j=0;j<4;j++)
     {
      roll('S');
     for(k=0;k<4;k++)
     {
        roll('E');
        for(l=0;l<4;l++)
        {
        roll('S');
          if(up==D1 && mae==D2)
          return D3;
        }
     }
     }
    }
  }
  
  
};

int main()
{
  int di[6]={};
  int i;
  int q;
  int up;
  int mae;
  
  for(i=0;i<6;i++)
    cin >> di[i];
    
  Dice dice1(di[0],di[1],di[2],di[3],di[4],di[5]);
  
  cin >> q;
  
  for(i=0;i<q;i++)
  {
    cin >> up >> mae;
    cout << dice1.light(up,mae) <<"\n";
  }
}