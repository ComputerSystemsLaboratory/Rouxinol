#include<iostream>
using namespace std;
int main(){
  int gold,change,count;
  while(cin>>gold){
    if(gold==0) break;
    change = 1000 - gold;
    count = 0;
    while(change!=0){
      if(change>=500){
	count++;
	change -= 500;
      }
      else if(change<500&&change>=100){
	count++;
	change -= 100;
      }
      else if(change<100&&change>=50){
	count++;
	change -= 50;
      }
      else if(change<50&&change>=10){
	count++;
	change -= 10;
      }
      else if(change<10&&change>=5){
	count++;
	change -= 5;
      }
      else if(change<5&&change>=1){
	count++;
	change -= 1;
      }
    }
    cout << count << endl;
  }
  return 0;
}