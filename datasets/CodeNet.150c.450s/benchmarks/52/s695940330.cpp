#include<iostream>
using namespace std;
int main(){
  int i=0,num,a[10],x=0;
  
  while(cin>>num){
    if(num==0)cout<<a[--i]<<endl;
    else  a[i++]=num;
  } 
  return 0;
}