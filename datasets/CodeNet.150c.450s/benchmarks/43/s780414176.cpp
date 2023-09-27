#include<iostream>

using namespace std;

int main(){

  int n;

  for( ; ; ){

  cin>> n;

  int A,B;

  A=0;
  B=0;

  if(n==0)break;

   for(int i=0;i<n;i++){
 
     int a,b;

     cin>>a>>b;

     if(a>b){
       A=A+a+b;
     }
     if(a<b){
       B=B+a+b;
     }
     if(a==b){
       A=A+a;
       B=B+b;
     }
   }
   cout<<A<<" "<<B<<endl;
  }

  return 0;
}