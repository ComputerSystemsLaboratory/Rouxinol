#include<iostream>
using namespace std;

int main(){
  int a,b;
  while(cin>>a>>b,a+b){
    if(a<b) cout<<a<<' '<<b<<endl;
    else cout<<b<<' '<<a<<endl;
  }
  return 0;
}