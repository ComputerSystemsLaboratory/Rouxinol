#include<iostream>
using namespace std;
int main(){
  int a,b,r,G,R,L,tmp;
  while(cin >> a >> b){
    R = a; L = b;
    if(b > a){
      tmp = a; a = b; b = tmp;
    }
    while(1){
      r = a % b;
      if(r == 0)
        break;
      a = b;
      b = r;
       }
    G = b;
    R = R / G;
    L = L / G;
    cout << G <<" "<< R*L*G << endl;
  }
}