#include <iostream>
#include <string>
using namespace std;

class dice{
public:
  dice(int* m);
  void putm(int* m);
  int* getm();
  int* getj();
  void rollDice(char s);
private:
  int m[6];
  int j[6];
};

dice::dice(int* m){
  for(int i=0; i<6; i++){
    this->m[i] = m[i];
    j[i] = m[i];
  }
}

void dice::putm(int* m){
  for(int i=0; i<6; i++) this->m[i] = m[i];
}

int* dice::getm(){
  return m;
}

int* dice::getj(){
  return j;
}

void dice::rollDice(char s){
  //cout << s << endl;
  if(s!='N' && s!='S' && s!='W' && s!='E'){
    cout << "your input: " << s << " roll miss!! " << endl;
  }

  else if(s=='N'){
    int buf=j[0];
    j[0]=j[1];
    j[1]=j[5];
    j[5]=j[4];
    j[4]=buf;
  }
  else if(s=='S'){
    int buf=j[0];
    j[0]=j[4];
    j[4]=j[5];
    j[5]=j[1];
    j[1]=buf;
  }
  else if(s=='W'){
    int buf=j[0];
    j[0]=j[2];
    j[2]=j[5];
    j[5]=j[3];
    j[3]=buf;
  }
  else if(s=='E'){
    int buf=j[0];
    j[0]=j[3];
    j[3]=j[5];
    j[5]=j[2];
    j[2]=buf;
  }
}

int main(){
  int m[6];
  string roll;
  for(int i=0; i<6; i++) cin >> m[i];

  cin >> roll;

  dice d(m);
  for(int i=0; i<roll.length(); i++){
    d.rollDice(roll[i]);
  }

  cout << d.getj()[0] << endl;

  return 0;
}

