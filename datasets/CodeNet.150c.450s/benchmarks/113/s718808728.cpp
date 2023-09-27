//itp1_3-a
#include <iostream>
using namespace std;

int main(){
 int temp,i;
 i=0;
 while(true){
  cin>>temp;
  if(temp==0)
   break;
  else
   cout<<"Case "<<i+1<<": "<<temp<<endl;
  i++;
 }
 return 0;
}