#include<iostream>
using namespace std;
int main(){
  int t=0,bell=0,hess=0,number[100]={0};
  while(cin >> bell){
    t++;
    number[bell]++;
  }
  for(int i=0;i<t;i++){
    if(number[i]>hess){
      hess=number[i];
    }
  }
  for(int i=0;i<t;i++){
    if(number[i]>=hess){
      cout << i << endl;
    }
  }
}