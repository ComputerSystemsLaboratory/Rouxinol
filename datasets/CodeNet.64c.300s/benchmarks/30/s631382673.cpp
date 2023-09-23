#include <iostream>
using namespace std;
int main(){
int a,b,c=0;
while(1){
cin>>a;
  if(a==0){
       break;
}else{
    b=1000-a;
    c=b/500;
    c=c+b%500/100;
    c=c+b%500%100/50;
    c=c+b%500%100%50/10;
    c=c+b%500%100%50%10/5;
    c=c+b%500%100%50%10%5/1;
    a=0; 
   }
cout<< c << endl;
} 
return 0;
}