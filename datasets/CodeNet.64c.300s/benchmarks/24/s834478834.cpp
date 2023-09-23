#include<iostream>
using namespace std;

int main() {
  int d;
  while(true) {
    cin>>d;
    if(d==0) break;

    int a,b,sa=0,sb=0;
    for(int i=0; i<d; i++) {
      cin>>a>>b;
      if(a>b) sa+=a+b;
      else if(b>a) sb+=a+b;
      else sa+=a,sb+=b;
    }

    cout<<sa<<" "<<sb<<endl;
  }
}