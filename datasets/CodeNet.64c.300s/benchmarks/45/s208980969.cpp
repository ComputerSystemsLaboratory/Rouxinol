#include <iostream>
using namespace std;

int main(){
  int n, m, p;
  while(true){
    cin >> n >> m >> p;
    if(n == 0)
      break;

    int ave = 0,  deno, x;
    for(int i=0; i<n; i++){
      cin >> x;
      if(i+1 == m)
        deno = x;

      ave += x*100;
    }
    if(deno == 0)
      cout << 0 << endl;
    else{
      ave = ave * (100 - p) / (100*deno);
      cout << ave << endl;
    }
  }
  
  return 0;
}