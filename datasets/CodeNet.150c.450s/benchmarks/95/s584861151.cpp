#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin >> n, n){
    string op;
    int ans = 0;
    bool state = false;
    bool l = false, r = false;
    
    for(int i = 0 ; i < n ; i++){
      cin >> op;
      if(op == "lu") l = true;
      if(op == "ru") r = true;
      if(op == "ld") l = false;
      if(op == "rd") r = false;
      
      if(!state && l && r){ ans++; state = true; }
      if(state && !l && !r){ ans++; state = false; }      
    }
    cout << ans << endl;
  }
  
  return 0;
}