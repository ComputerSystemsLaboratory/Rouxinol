#include <iostream>

using namespace std;

int main(){
  int a[6]={500,100,50,10,5,1},input,count,i;
  while(1){
    cin>>input;
    if(input==0){
      break;
    }
    input=1000-input;
    for(i=0,count=0;i<6;i++){
      if(input/a[i]>0){
        count+=input/a[i];
      }
      input=input-(input/a[i])*a[i];
    }
    cout<<count<<endl;
  }
  return 0;
}