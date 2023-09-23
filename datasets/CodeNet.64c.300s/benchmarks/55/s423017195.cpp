#include <iostream>
using namespace std;

int main(){
  int a, i;

  i = 1;
  while(cin>>a&&a){
    if(a != 0) cout<<"Case "<<i<<": "<<a<<endl;
    i++;
  }
}