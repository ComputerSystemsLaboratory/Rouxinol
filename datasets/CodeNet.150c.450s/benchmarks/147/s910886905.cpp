#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> ans(N+1,0);
  for(int x=1;;x++){
    if(x*x>N){
      break;
    }
    for(int y=1;;y++){
      if(x*x+y*y+x*y>N){
        break;
      }
      for(int z=1;;z++){
        if(x*x+y*y+z*z+x*y+y*z+z*x>N){
          break;
        }
        ans.at(x*x+y*y+z*z+x*y+y*z+z*x)++;
      }
    }
  }
  for(int i=1;i<=N;i++){
    cout << ans.at(i) << endl;
  }
  return 0;
}
