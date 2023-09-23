#include <iostream>

using namespace std;

int x;

int main(){
 for(int i=1;i<10001;i++){
  cin>>x;
  if(x==0){
   break;
   }
  cout<<"Case "<<i<<":"<<" "<<x<<endl;
 }
 
}