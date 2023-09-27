#include<iostream>
using namespace std;

int main(){
while(true){
  int iwakurasisetudan;
  int b;
  int c;
  cin>>iwakurasisetudan;
if(iwakurasisetudan==0){break;
}else{  c=1000-iwakurasisetudan;
  b=c/500;
  c=c%500;
  b=b+c/100;
  c=c%100;
  b=b+c/50;
  c=c%50;
  b=b+c/10;
  c=c%10;
  b=b+c/5;
  c=c%5;
  b=b+c;
  cout<<b<<endl;
}}}

  