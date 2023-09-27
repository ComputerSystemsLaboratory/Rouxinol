#include<iostream>

using namespace std;

int main(void){
  int input,suma=0,sumb=0,i;
  for(i=0;i<4;i++){
    cin>>input;
    suma+=input;
  }
  for(i=0;i<4;i++){
    cin>>input;
    sumb+=input;
  }
  cout<<((suma<sumb)?sumb:suma)<<endl;
  return 0;
}