#include <iostream>

#define FOR(i,l,n) for(int (i)=(l);(i)<(n);(i)++)
#define REP(i,n) FOR(i,0,n)

using namespace std;

int main(){
    long int x,y,z,e,m;
    while(cin>>e,e){
        m=e;
      for(y=0;y*y<=e;y++){
          for(z=0;z*z*z+y*y<=e;z++){
              x = e-y*y-z*z*z;
              m = m<x+y+z?m:x+y+z;
          }
      }  
        cout<<m<<endl;
    }
    return 0;
}
