#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int a,b,x,keta;
  while(cin>>a>>b){
    x=a+b;
    keta=log10(x)+1;
    cout<<keta<<endl;
  }
}