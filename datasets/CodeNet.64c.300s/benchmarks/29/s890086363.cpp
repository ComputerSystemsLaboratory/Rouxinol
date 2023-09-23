#include <iostream>
using namespace std;
int E;

int main(){

  while(cin >> E){
    if ( E == 0) break;
    int min = 100000001; 
    for (int z = 0; z*z*z < E + 1; ++z){
      for (int y = 0; y*y < E - z*z*z + 1 ; ++y){
        int x = E - z*z*z - y*y;
        if( x + y + z < min ) min = x + y + z ;
      }
    }
    cout << min << endl;
  }
return 0;
}