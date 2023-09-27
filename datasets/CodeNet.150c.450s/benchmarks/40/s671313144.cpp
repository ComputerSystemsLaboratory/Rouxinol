#include <iostream>

using namespace std;

class Dice{
private:
  int tmp;
public:
  int d[6];

  void rollN(){
    tmp = d[0];
    d[0] = d[1];
    d[1] = d[5];
    d[5] = d[4];
    d[4] = tmp;
  }
 
  void rollE(){
    tmp = d[0];
    d[0] = d[3];
    d[3] = d[5];
    d[5] = d[2];
    d[2] = tmp;
  }

  void rollS(){
    tmp = d[0];
    d[0] = d[4];
    d[4] = d[5];
    d[5] = d[1];
    d[1] = tmp;
  }

  void rollW(){
    tmp = d[0];
    d[0] = d[2];
    d[2] = d[5];
    d[5] = d[3];
    d[3] = tmp;
  }
};

int main(){
  Dice dice;
  string str;

  for(int i = 0 ; i < 6 ; i++){
    cin >> dice.d[i];
  }
  cin.ignore();
  getline(cin,str);
  for(int i = 0 ; i < str.size() ; i++){
    switch(str[i]){
    case 'N':
      dice.rollN();
      break;
    case 'E':
      dice.rollE();
      break;
    case 'S':
      dice.rollS();
      break;
    case 'W':
      dice.rollW();
    break;
    }
  }
  cout << dice.d[0] << endl;

  return 0;
}