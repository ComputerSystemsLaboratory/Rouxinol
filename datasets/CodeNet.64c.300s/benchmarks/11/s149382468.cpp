#include <iostream>
using namespace std;
int main(){
 int h,m,s,S,a,b,c,d;
 h=m=s=S=a=b=c=d=0;
 cin>>S;
 if(3600<=S){
  a=S/3600;
  b=S%3600;
  S=b;
  h=a;
 }
 if(60<=S){
  c=S/60;
  d=S%60;
  m=c;
  s=d;
 }else{
  s=S;
 }
 
 cout<<h<<":"<<m<<":"<<s<<endl;
 return 0;
}