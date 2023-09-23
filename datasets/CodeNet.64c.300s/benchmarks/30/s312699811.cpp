#include<iostream>
using namespace std;
int main(){
  int money,coin=0;
  while(1){
    coin=0;
    cin >> money;
    if(money==0){
      break;
    }
    money=1000-money;
    while(money>0){
      if(money>=500){
	money-=500;
	coin++;
      }
      else if(money>=100){
	money-=100;
	coin++;
      }
      else if(money>=50){
	money-=50;
	coin++;
      }
      else if(money>=10){
	money-=10;
	coin++;
      }
      else if(money>=5){
	money-=5;
	coin++;
      }
      else if(money>=1){
	money-=1;
	coin++;
      }
    }
    cout << coin << endl;
  }
  return (0);
}