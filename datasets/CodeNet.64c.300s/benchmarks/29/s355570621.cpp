#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int e,m;

  while(cin >> e && e>0){
      m=e;
    for(int z=0; pow(z,3)<=e; z++){
      int pz = pow(z,3);
      for(int y=0; pz+pow(y,2)<=e; y++){
        int x = e - (pz+pow(y,2));
          if(x+y+z<m)
            m=x+y+z;
        }
      }
    cout << m << endl;
  }
}