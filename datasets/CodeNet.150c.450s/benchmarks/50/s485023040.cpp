#include<iostream>
using namespace std;
int main(){
  int mon,c;
  while(1){
    cin>>mon;
    if(mon==0){
      break;
    }
    mon=1000-mon;
    c=0;
    for(int i=0;i<15;i++){
      if(mon==0){
	break;
      }
      if(mon>=500){
	mon-=500;
	c++;
      }if(mon<500&&mon>=100){
	mon-=100;
	c++;
      }if(mon<100&&mon>=50){
	mon-=50;
	c++;
      }if(mon<50&&mon>=10){
	mon-=10;
	c++;
      }if(mon<10&&mon>=5){
	mon-=5;
	c++;
      }if(mon<5){
	c+=mon;
	mon=0;
      }
    }
  cout<<c<<endl;
  }
  return 0;
}