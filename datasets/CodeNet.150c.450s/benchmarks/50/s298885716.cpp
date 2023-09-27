#include<iostream> 
using namespace std; 

int main() 
{ 
 int buy,oturi,kozeni,a,b,c,d,e,f; 
 while(1){
  cin>>buy;
  if(buy==0)
   break;
  else{
   oturi=1000-buy;
   a=oturi/500;
   if(a)b=(oturi-500)/100;
     else b=oturi/100;
   c=oturi%100/50;
   if(c)d=(oturi%100-50)/10;
     else d=oturi%100/10;
   e=oturi%10/5;
   if(e)f=oturi%10-5;
      else f=oturi%10;   

   kozeni=a+b+c+d+e+f;
   cout<<kozeni<<"\n";
  }
 }
 return 0; 
} 
  