#include <iostream>
#include <string>
using namespace std;

struct dice{
  double _1,_2,_3,_4,_5,_6;
};

int main(){
  
  dice d;
  int sus,i;
  string dir;
 
  cin>>d._1>>d._2>>d._3>>d._4>>d._5>>d._6;
  cin>>dir;
  
  for(i=0; i<dir.size(); i++){
    
    switch(dir[i]){
    case 'N':
      sus=d._1;
      d._1=d._2;
      d._2=d._6;
      d._6=d._5;
      d._5=sus;
      break;
    case 'E':
      sus=d._1;
      d._1=d._4;
      d._4=d._6;
      d._6=d._3;
      d._3=sus;
      break;
    case 'W':
      sus=d._1;
      d._1=d._3;
      d._3=d._6;
      d._6=d._4;
      d._4=sus;
      break;
    case 'S':
      sus=d._1;
      d._1=d._5;
      d._5=d._6;
      d._6=d._2;
      d._2=sus;
      break;
    }

  }

  cout<<d._1<<endl;

}