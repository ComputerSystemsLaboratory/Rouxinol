#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int d,sum;
  while(cin>>d){
    sum=0;
    for(int i=0;i*d<600;i++){
      sum+=d*(i*d)*(i*d);
    }
    cout<<sum<<endl;
  }
  return 0;
}