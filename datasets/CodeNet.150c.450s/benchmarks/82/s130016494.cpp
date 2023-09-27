#include <iostream>
using namespace std;

class dice{
  
public:
  int _1,_2,_3,_4,_5,_6,sus;

  void moveN(){
    sus=_1;
    _1=_2;
    _2=_6;
    _6=_5;
    _5=sus;
  }

  void moveE(){
    sus=_1;
    _1=_4;
    _4=_6;
    _6=_3;
    _3=sus;
  }

  void moveW(){
    sus=_1;
    _1=_3;
    _3=_6;
    _6=_4;
    _4=sus;
  }

  void moveS(){
    sus=_1;
    _1=_5;
    _5=_6;
    _6=_2;
    _2=sus;
  }
  
  void spin(){
    sus=_2;
    _2=_3;
    _3=_5;
    _5=_4;
    _4=sus;
  }
  
};

int main(){
  
  dice d1;

  int dir_t,i,T,F;

  cin>>d1._1>>d1._2>>d1._3>>d1._4>>d1._5>>d1._6;
  cin>>dir_t;

  for(i=0; i<dir_t; i++){

    cin>>T>>F;
    
    if(d1._3==T||d1._4==T)d1.moveE();
    while(d1._1!=T)d1.moveN();
    while(d1._2!=F)d1.spin();
    
    cout<<d1._3<<endl;
    
  }

  return 0;

}