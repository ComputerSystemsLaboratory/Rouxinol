//itp1_3-c
#include <iostream>
using namespace std;

int main(){
 int x,y;
 while(true){
  cin>>x>>y;
  if(!x && !y)
   break;
  else
   cout<<min(x,y)<<" "<<max(x,y)<<endl;
 }
 return 0;
}