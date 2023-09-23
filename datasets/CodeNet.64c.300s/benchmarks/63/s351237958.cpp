#include <iostream>
using namespace std;

int main(){
  int a,b,c,a2,b2;
  while(cin>>a>>b){
    a2=a;
    b2=b;
    while(1){
      if(a2%b2==0)break;
      else {
	c=a2%b2;
	a2=b2;b2=c;
      }
    }
    c=b2;
    c*=a/b2;
    c*=b/b2;
    cout <<b2<<" "<<c<<endl;
  }
  return 0;
}