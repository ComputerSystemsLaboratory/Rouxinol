#include <iostream>
#include <vector>

using namespace std;

class Dice
{
  public:
    vector<int> diceNum;
    Dice(vector<int>& inputs);
    void toW();
    void toS();
    void ParallelRotation();
};

Dice::Dice(vector<int>& inputs)
{
  diceNum=inputs;
}

void Dice::toW()
{
  swap(diceNum[0],diceNum[3]);
  swap(diceNum[0],diceNum[5]);
  swap(diceNum[0],diceNum[2]);
}

void Dice::toS()
{
  swap(diceNum[0],diceNum[1]);
  swap(diceNum[0],diceNum[5]);
  swap(diceNum[0],diceNum[4]);
}

void Dice::ParallelRotation()
{
  swap(diceNum[1],diceNum[2]);
  swap(diceNum[2],diceNum[4]);
  swap(diceNum[4],diceNum[3]);
}

int main(int argc,char* argv[])
{
  vector<int> inputs(6);
  int count,a,b;
  for(int i=0;i<6;i++){cin >> inputs[i];}
  Dice dice(inputs);
  cin >> count;
  for(int i=0;i<count;i++)
  {
    cin >> a >> b;
    while(1)
    {
      if(dice.diceNum[0]==a) break;
      dice.toW();
      if(dice.diceNum[0]==a) break;
      dice.toS();
    }
    while(1)
    {
      if(dice.diceNum[1]==b)break;
      dice.ParallelRotation();
    }
    cout << dice.diceNum[2] << endl;
  }
}