#include<iostream>

int main(){
 int a, b;

 while(1){
  std::cin>>a>>b;
  if(a==0 && b==0 ) break;

  if(a<b){
   std::cout<<a<<" "<<b<<"\n";
  } else {
   std::cout<<b<<" "<<a<<"\n";
  }
 }
 return 0;
}