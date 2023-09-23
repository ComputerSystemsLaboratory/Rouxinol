#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int E;
  while(cin >> E){
    if(E==0) break;
    int min=E;
    int sum;
    for(int z=0;z*z*z<=E;++z){
      int y=sqrt(E-z*z*z);
      int x=E-z*z*z-y*y;
      sum=x+y+z;     
      if(min>sum) min=sum;
    }
    cout<< min <<endl;
  }
  return 0;
}