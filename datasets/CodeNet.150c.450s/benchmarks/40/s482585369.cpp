#include<bits/stdc++.h>
using namespace std;

class Dice{
private:
  int right,left,front,back,bottom,now;
  void role(int num[6],string str){
    for(int i=0;i<str.size();i++){
      switch(str[i]){
      case 'S':num[1]=now;num[0]=back;num[4]=bottom;num[5]=front;now=num[0];back=num[4];bottom=num[5];front=num[1];break;
      case 'W':num[3]=now;num[5]=left;num[2]=bottom;num[0]=right;now=num[0];left=num[3];bottom=num[5];right=num[2];break;
      case 'E':num[3]=bottom;num[0]=left;num[2]=now;num[5]=right;now=num[0];left=num[3];bottom=num[5];right=num[2];break;
      case 'N':num[4]=now;num[0]=front;num[1]=bottom;num[5]=back;now=num[0];back=num[4];bottom=num[5];front=num[1];break;
      }
     
    }
  }
public:
  void Scan(int num[6],string str){
    now=num[0];right=num[2];left=num[3];front=num[1];back=num[4];bottom=num[5];
    role(num,str);
  }
};

int main(){
  Dice dice;
  string str;
  int num[6];
  for(int i=0;i<6;i++)
    cin>>num[i];
  cin>>str;
  dice.Scan(num,str);
  cout<<num[0]<<endl;
  return 0;
}