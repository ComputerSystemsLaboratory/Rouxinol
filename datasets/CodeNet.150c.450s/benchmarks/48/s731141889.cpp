#include <iostream>
using namespace std;
int main(){
  int x,E;
  while(cin >> E && E > 0){
    int xyz = 1000000;
    for(int z=100;z>=0;z--){
      for(int y=1000;y>=0;y--){
        x = E - y*y - z*z*z;
        if((x>=0) && (x+y+z < xyz)){
          xyz = x+y+z;
        }//
      }//fory
    }//forz
    cout << xyz << endl;
  }//whileE>0
}