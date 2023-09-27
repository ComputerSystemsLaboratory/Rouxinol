#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int e,min;
  int y,x;
  
  while(1){
    cin >>e;
    if(e == 0)break;

    min =1e9;
    for(int i=0 ; i*i*i <= e ; i++){
      y=sqrt(e-i*i*i);
      x=e-y*y-i*i*i;
      if(x+y+i < min)min=x+y+i;
    }
    
    cout <<min<<endl;
    
  }
    
    return 0;
}