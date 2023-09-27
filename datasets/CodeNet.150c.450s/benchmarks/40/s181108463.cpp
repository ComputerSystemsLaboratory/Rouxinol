#include<iostream>
#include<string>
using namespace std;

class Dice{
public:
  int face[6];
  int top(){return face[0];}
  void setFace(int i, int num);
  void moveFloor(char dir);
};

void Dice::setFace(int i, int num){
  face[i] = num;
  return;
}

void Dice::moveFloor(char dir){
  int temp=face[5];
  if(dir == 'E'){
    face[5]=face[2]; face[2]=face[0];
    face[0]=face[3]; face[3]=temp;
  }else if(dir == 'N'){
    face[5]=face[4]; face[4]=face[0];
    face[0]=face[1]; face[1]=temp;
  }else if(dir == 'S'){
    face[5]=face[1]; face[1]=face[0];
    face[0]=face[4]; face[4]=temp;
  }else if(dir == 'W'){
    face[5]=face[3]; face[3]=face[0];
    face[0]=face[2]; face[2]=temp;
  }
}

int main(){
  int num;
  Dice d;
  for(int i=0; i<6; i++){
    cin >> num;
    d.setFace(i, num);
  }

  string s;
  cin >> s;
  for(int i=0; i<s.size(); i++)
    d.moveFloor(s[i]);

  cout << d.top() << endl;
  return 0;
}

