#include<bits/stdc++.h>
using namespace std;

signed main(){

  int d;
  vector<int> c(26);
  cin>>d;
  for(auto& ci:c)cin>>ci;
  vector<vector<int>> s(d,vector<int>(26));
  for(auto& si:s)for(auto& sij:si)cin>>sij;

  vector<int> t(d);
  for(auto& ti:t)cin>>ti,ti--;

  vector<int> last(26,0);

  vector<int> v(d);
  auto calc_satisfaction_level = [&](int d,int i){
    int res = s[d][i];
    for(int j=0;j<26;++j){
      if(i==j)continue;
      res -= c[j]*(d-last[j]+1);
    }
    return res;
  };

  for(int i=0;i<d;++i){
    int tmp = calc_satisfaction_level(i,t[i]);
    if(i>0)v[i]=v[i-1]+tmp;
    else v[i] = tmp;
    last[t[i]] = i+1;
  }

  for(auto vi:v)cout<< vi <<endl;

}