#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int e;
    cin>>e;
    if(!e)break;
    int m=1000000;
    for(int z=0;z*z*z <= e;++z)
      for(int y=0;y*y+z*z*z<=e;++y){
        int x = e-y*y-z*z*z;
        m=min(m,x+y+z);
      }
    cout<<m<<endl;
  }
  return 0;
}