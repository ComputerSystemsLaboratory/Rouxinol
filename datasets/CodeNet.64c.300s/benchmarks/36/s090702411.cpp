#include <iostream>
using namespace std;
int main(){
  int a;
  int b;
  int c;
  int k;
  cin>>a>>b>>c;
  if (a>b){
    k=a;
    a=b;
    b=k;
  }
  if (b>c){
    k=b;
    b=c;
    c=k;
  }
  if (a>b){
    k=a;
    a=b;
    b=k;
  }
  cout<<a<<" "<<b<<" "<<c<<endl;
}
