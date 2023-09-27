#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
  int n;
  while(cin>>n,n){
    int state=0,cnt=0;
    for(string step;n>0;--n){
      cin>>step;
      if(step=="lu"||step=="ru"){
        if(state==1) cnt++;
        state=1;
      }else{
        if(state==0) cnt++;
        state=0;
      }
    }
    cout<<cnt<<endl;
  }

  return EXIT_SUCCESS;
}