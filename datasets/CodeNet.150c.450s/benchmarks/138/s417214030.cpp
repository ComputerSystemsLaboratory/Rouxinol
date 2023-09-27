#include <iostream>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;

  if(a<b) {
    int c=b;
    b=a;
    a=c;
  }

  while(b){
    int r=a%b;
    a=b;
    b=r;
  }
  cout <<a<<endl;
  
  return 0;
}