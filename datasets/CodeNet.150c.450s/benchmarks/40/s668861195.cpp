#include <iostream>
using namespace std;

int main(){
 int d[6],tmp;
 char s; 

 for(int i=0;i<6;i++){
  cin >> d[i] ;
 }
 
 while(cin >> s){
  if(s=='E'){
   tmp=d[0];
   d[0]=d[3];
   d[3]=d[5];
   d[5]=d[2];
   d[2]=tmp;
  }
  if(s=='N'){
   tmp=d[0];
   d[0]=d[1];
   d[1]=d[5];
   d[5]=d[4];
   d[4]=tmp;
  }
  if(s=='S'){
   tmp=d[0];
   d[0]=d[4];
   d[4]=d[5];
   d[5]=d[1];
   d[1]=tmp;
  }
  if(s=='W'){
   tmp=d[0];
   d[0]=d[2];
   d[2]=d[5];
   d[5]=d[3];
   d[3]=tmp;
  }
 }
 
 cout << d[0] << endl ;

 return 0;
}

 