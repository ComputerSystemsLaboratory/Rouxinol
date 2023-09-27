#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int m, f, r;
    cin>>m>>f>>r;
    if(m == -1 && f == -1 && r == -1) break;
    string ans;
    if(m == -1 || f == -1) ans = "F";
    else if(m + f >= 80) ans = "A";
    else if(m + f >= 65) ans = "B";
    else if(m + f >= 50) ans = "C";
    else if(m + f >= 30){
      if(r >= 50) ans = "C";
      else ans = "D";
    }
    else ans = "F";
    cout<<ans<<endl;
  }
  return 0;
}

