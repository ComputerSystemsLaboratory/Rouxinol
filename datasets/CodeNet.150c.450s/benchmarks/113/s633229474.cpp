#include<iostream>
using namespace std;

int main(){
 int x;
 int count=0;
 while(true){
  cin>>x;
  count++;
  if(x==0){
   break;
  }else{
   cout<<"Case "<<count<<": "<<x<<'\n';
  }
 }
 return 0;
}