#include <iostream>
using namespace std;


int main(){
  while(true){
    int much;
    int ot=0;
    cin>>much;
    if(much==0){
      break;
    }
    much=1000-much;
    while(true){
      if(much>=500){
	much=much-500;
	ot=ot+1;
      }else{
	break;
      }
    }
    while(true){
      if(much>=100){
	much=much-100;
	ot=ot+1;
      }else{
	break;
      }
    }
    while(true){
      if(much>=50){
	much=much-50;
	ot=ot+1;
      }else{
	break;
      }
    }
    while(true){
      if(much>=10){
	much=much-10;
	ot=ot+1;
      }else{
	break;
      }
    }
    while(true){
      if(much>=5){
	much=much-5;
	ot=ot+1;
      }else{
	break;
      }
    }
    while(true){
      if(much>=1){
	much=much-1;
	ot=ot+1;
      }else{
	break;
      }
    }
    cout<<ot<<endl;
  }
  
  return 0;
}