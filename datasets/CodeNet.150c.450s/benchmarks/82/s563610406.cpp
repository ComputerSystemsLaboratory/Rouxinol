#include<bits/stdc++.h>
using namespace std;

class Dice{
private:
  int right,left,front,back,bottom,now;
  void role(int num[6],int a,int b,string str){
    for(int i=0;i<str.size();i++){
      if(num[0]==a&&num[1]==b){
	cout<<num[2]<<endl;
	return;
      }
      switch(str[i]){
      case 'S':num[1]=now;num[0]=back;num[4]=bottom;num[5]=front;now=num[0];back=num[4];bottom=num[5];front=num[1];break;
      case 'W':num[3]=front;num[1]=right;num[2]=back;num[4]=left;front=num[1];left=num[3];back=num[4];right=num[2];break;
      case 'E':num[3]=bottom;num[0]=left;num[2]=now;num[5]=right;now=num[0];left=num[3];bottom=num[5];right=num[2];break;
      case 'N':num[4]=now;num[0]=front;num[1]=bottom;num[5]=back;now=num[0];back=num[4];bottom=num[5];front=num[1];break;
      }
     
      if(num[0]==a&&num[1]==b){
	cout<<num[2]<<endl;
	return;
      }
    }
  }
public:
  void Scan(int num[6],int a,int b){
    now=num[0];right=num[2];left=num[3];front=num[1];back=num[4];bottom=num[5];
    role(num,a,b,"WWWNWWWWNWWWWNWWWNWWWWNNWWWNWWW");
  }
};

int main(){
  Dice dice;
  int a,b,n;
  int num[6],num2[6];
  for(int i=0;i<6;i++){
    cin>>num[i];
    num2[i]=num[i];
  }
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    dice.Scan(num,a,b);
    for(int j=0;j<6;j++)
      num[j]=num2[j];
  }
  return 0;
}