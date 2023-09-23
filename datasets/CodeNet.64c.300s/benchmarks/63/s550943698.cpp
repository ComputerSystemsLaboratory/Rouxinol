#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  long long a,b,c,l;
  while(cin>>a>>b){
    l = a*b;
    while(b){
      c = a;
      a = b;
      b = c % b;
    }
    cout<<a<<" "<<l/a<<endl;
  }
}