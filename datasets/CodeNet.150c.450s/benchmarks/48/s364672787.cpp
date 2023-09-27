#include <bits/stdc++.h>
using namespace std;
int main(){
  int e;
  vector<int> ans;
  while(cin >> e,e){
    vector<int> combi;
    for(int y = 0;e-y*y+y >= 0;y++){
      for(int z = 0;e-y*y+y-z*z*z+z >= 0;z++){
        if(e-y*y-z*z*z >= 0)combi.push_back(e-y*y+y-z*z*z+z);
      }
    }
  int q = 1000000;
  for(int i = 0;i < combi.size();i++)q = min(q,combi[i]);
  ans.push_back(q);
  }
  for(int i = 0;i < ans.size();i++)cout << ans[i] << endl;
}
