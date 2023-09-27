#include<iostream>
using namespace std;

int main(){
 int mountain,first=0,second=0,third=0;
 for(int i=0;i<10;i++){
  cin>>mountain;
  if(mountain>first){
   third=second;
   second=first;
   first=mountain;
  }else if(mountain>second){
   third=second;
   second=mountain;
  }else if(mountain>third){
   third=mountain;
  }
 }
 cout<<first<<'\n'<<second<<'\n'<<third<<'\n';
 return 0;
}