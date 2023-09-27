#include<iostream>
using namespace std;
int main(){
  int mon,cnt;
  while(1){
    cin >> mon;
    if(mon==0)break;
    cnt=0;
    mon=1000-mon;
    while(1){
      if(mon<5)break;
      if(mon>=500){mon-=500;cnt++;}
      else if(mon>=100 && mon<500){mon-=100;cnt++;}
      else if(mon>=50 && mon<100){mon-=50;cnt++;}
      else if(mon>=10 && mon<50){mon-=10;cnt++;}
      else if(mon>=5 && mon<10){mon-=5;cnt++;}
    }
    cnt+=mon;
    cout<< cnt << endl;
  }
  return 0;
}