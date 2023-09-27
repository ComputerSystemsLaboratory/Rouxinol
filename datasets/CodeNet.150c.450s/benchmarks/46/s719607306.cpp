#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int a, b;


  int sum;
  while(1){
    int pattern=0;
    cin>>a>>b;
    if(a==0&&b==0) break;
    for(int i=0;i<a;i++){
      for(int j=i+1;j<a;j++){
        for(int k=j+1;k<a;k++){
          if((i+j+k+3)==b){
            pattern++;
          }
        }
      }
    }
    cout<<pattern<<endl;    
  }

  return 0;
}