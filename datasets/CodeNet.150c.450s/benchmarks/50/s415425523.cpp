#include<iostream>
using namespace std;

int main(){

 int num,oturi,m = 0;

while(1){
 
cin>>num;

      if(num==0){
         break;
  }else{
    
  oturi=1000-num;

   
 
    m = oturi/500;
 
    m = m+oturi%500/100;
 
    m = m+oturi%500%100/50;
  
    m = m+oturi%500%100%50/10;
 
    m = m+oturi%500%100%50%10/5;

    m = m+oturi%500%100%50%10%5/1;

    num = 0;

     
   }
  cout<<m<<'\n';
  
}

return 0;
}