#include<bits/stdc++.h>
using namespace std;

int E;

int main(){
  while( cin >> E && E ){
    int res = E;
    for(int z=0;z*z*z<=E;z++){
      for(int y=0;y*y<=E-z*z*z;y++){
        int x = E - z*z*z - y*y;
        if( x < 0 ) break;
        res = min( res, x + y + z );
      }
    }
    cout << res << endl;
  }
}