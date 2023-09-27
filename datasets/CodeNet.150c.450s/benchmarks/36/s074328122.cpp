#include <bits/stdc++.h>
using namespace std;

int solve(int d, int tate){
  return d * tate * tate;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int d;
  while(cin>>d){
    int ans = 0;
    for(int i=0;i<=600-d;i+=d)
      ans += solve(d, i);
    cout << ans << endl;  
  }

  return EXIT_SUCCESS;
}