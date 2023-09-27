#include <iostream>
using namespace std;
int main(void){

  int x;
  int c=1;
  while(true){
      cin>>x;
      if(x==0){
          break;
      }
      cout <<"Case "<<c<<": "<<x<<endl;
      c=c+1;
  }

}
