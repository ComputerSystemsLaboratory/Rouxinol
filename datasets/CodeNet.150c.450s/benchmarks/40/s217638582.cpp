#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Dice
{
  public:
    vector<int> diceNum;
    Dice(vector<int>& inputs);
    void toS();
    void toN();
    void toW();
    void toE();
};

Dice::Dice(vector<int>& inputs)
{
  diceNum=inputs;
}

void Dice::toE()
{
  swap(diceNum[0],diceNum[2]);
  swap(diceNum[0],diceNum[5]);
  swap(diceNum[0],diceNum[3]);
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

void Dice::toN()
{
  swap(diceNum[0],diceNum[4]);
  swap(diceNum[0],diceNum[5]);
  swap(diceNum[0],diceNum[1]);
}

int main(int argc,char* argv[])
{
  vector<int> inputs(6);
  string operation;
  for(int i=0;i<6;i++){cin >> inputs[i];}
  Dice dice(inputs);
  cin >> operation;
  for(int i=0;i<operation.size();i++)
  {
    if(operation[i]=='E') dice.toE();
    else if(operation[i]=='W') dice.toW();
    else if(operation[i]=='S') dice.toS();
    else if(operation[i]=='N') dice.toN();
  }
  cout << dice.diceNum[0] << endl;
}