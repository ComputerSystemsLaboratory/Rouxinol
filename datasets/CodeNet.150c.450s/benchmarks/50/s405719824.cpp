#include<iostream>
using namespace std;
int main(){
  int money;
  int change;
  while(cin >> money,money){
  money=1000-money;
  change=0;
  while(money){
    if(money>=500){
      change++;
      money-=500;
    }
    else if(money>=100){
      change++;
      money-=100;
    }
    else if(money>=50){
      change++;
      money-=50;
    }
    else if(money>=10){
      change++;
      money-=10;
    }
    else if(money>=5){
      change++;
      money-=5;
    }else{
      change++;
      money-=1;
    }
  }
  cout << change << endl;
}
}