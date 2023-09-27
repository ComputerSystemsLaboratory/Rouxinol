#include <iostream>
using namespace std;

int a[11], b, t;

int main() {
  cin>>a[0];
  t=1;
  
  while(cin>>b) {
    if(b>0) {
      a[t]=b;
      t++;
    }else {
      cout<<a[t-1]<<endl;
      t--;
    }
  }
  
  return 0;
}