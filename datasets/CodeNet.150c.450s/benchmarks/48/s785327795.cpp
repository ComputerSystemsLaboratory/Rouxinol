#include <iostream>
using namespace std;

int main() {
  
  int e, m, s;
  
  while(cin>>e,e) {
    m=e;
    for(int i=0;i*i*i<=e;i++) {
      for(int j=0;i*i*i+j*j<=e;j++) {
          s = i+j+e-(i*i*i+j*j);
          if(s<m)m=s;
      }
    }
    cout<<m<<endl;
  }
  
  return 0;
}