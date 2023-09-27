#include<iostream>
#include<string>
using namespace std;

struct dice{
  int face[6];
};

int main(){
  dice f;
  int dmy;
  string s;
  for(int i=0;i<6;i++) cin >>f.face[i];
  cin >>s;
  for(int i=0;i<s.size();i++){
    switch(s[i]){
    case 'N':
      dmy=f.face[0];
      f.face[0]=f.face[1];
      f.face[1]=f.face[5];
      f.face[5]=f.face[4];
     f.face[4]=dmy;
        break;
    case 'S':
      dmy=f.face[0];
      f.face[0]=f.face[4];
      f.face[4]=f.face[5];
      f.face[5]=f.face[1];
      f.face[1]=dmy;
      break;
    case 'E':
      dmy=f.face[0];
      f.face[0]=f.face[3];
      f.face[3]=f.face[5];
      f.face[5]=f.face[2];
      f.face[2]=dmy;
      break;
    case 'W':
      dmy=f.face[0];
      f.face[0]=f.face[2];
      f.face[2]=f.face[5];
      f.face[5]=f.face[3];
      f.face[3]=dmy;
      break;
    }
  }
  cout <<f.face[0]<<endl;
  return 0;}