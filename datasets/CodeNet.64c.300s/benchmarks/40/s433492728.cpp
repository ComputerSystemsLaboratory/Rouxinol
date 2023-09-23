//itp1_8-a
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
 char c;
 while(true){
  scanf("%c",&c);
  if(c=='\n'){
   cout<<endl;
   break;
  }
  if(isupper(c)){
   c=tolower(c);
   cout<<c;
  }
  else if(islower(c)){
   c=toupper(c);
   cout<<(c);
  }
  else
   cout<<c;
 }
 return 0;
}