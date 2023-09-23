#include <iostream>
using namespace std;

int main(){
  int a,b,cou,c;
  while(cin>>a>>b){
    c=a+b;
    cou=1;
    for(int i=1;i<=c;i*=10)cou++;
    cout<<cou-1<<endl;
  }
  return 0;
}