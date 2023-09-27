#include <iostream>
using namespace std;

int main(){
 int d[6],q,a,b,tmp,j;

 for(int i=0;i<6;i++){
  cin >> d[i] ;
 }

 cin >> q ;

 for(int i=0;i<q;i++){
  j=0;
  cin >> a >> b ;
  while(1){
   if(d[1]==b)break;
   tmp=d[0];
   d[0]=d[1];
   d[1]=d[5];
   d[5]=d[4];
   d[4]=tmp;
   if(j==4){
    tmp=d[0];
    d[0]=d[3];
    d[3]=d[5];
    d[5]=d[2];
    d[2]=tmp;
   }
  j++;
  }
  while(1){
   if(d[0]==a)break;
   tmp=d[0];
   d[0]=d[2];
   d[2]=d[5];
   d[5]=d[3];
   d[3]=tmp;
  }

  cout << d[2] << endl ;
 }
 return 0;
}

 