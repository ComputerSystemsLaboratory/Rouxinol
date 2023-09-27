#include<iostream>
using namespace std;

int main(){
 int a,b,c;
 int min,center,top;
 cin>>a>>b>>c;
 if(a>b&&a>c){
  top=a;
  if(b>c){
   center=b;
   min=c;
  }else{
   center=c;
   min=b;
  }
 }

 if(b>a&&b>c){
  top=b;
  if(a>c){
   center=a;
   min=c;
  }else{
   center=c;
   min=a;
  }
 }

 if(c>a&&c>b){
  top=c;
  if(c>a&&c>b){
   if(a>b){
    center=a;
    min=b;
   }else{
    center=b;
    min=a;
   }
  }
 }
 cout<<min<<' '<<center<<' '<<top<<'\n';
 return 0;
}