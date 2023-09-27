#include <iostream>
using namespace std;

int main(){
  int a, b, tmp;

  cin>>a>>b;
  while(b != 0){
    tmp = b;
    b = a%b;
    a = tmp;
  }
  cout<<a<<endl;
}