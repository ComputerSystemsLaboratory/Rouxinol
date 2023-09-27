#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int e;

  while(cin>>e,e){
    int m=e;

    for(int z=0; z*z*z<=e; z++){
      const int z3 = z*z*z;
      for(int y=0; y*y+z3<=e; y++){
        int x = e - z3 - y*y;
        if(m>x+y+z&&x>=0) m=x+y+z;
      }
    }
    cout << m << endl;
  }

  return 0;
}