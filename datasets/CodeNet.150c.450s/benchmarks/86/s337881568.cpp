#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{ 
  int n, m, p;
  vector<int> ans;
  while(cin>>n>>m>>p, n||m||p)
  {
    m--;
    vector<int> x;
    for(int i=0;i<n;++i)
    {
      int t; cin>>t;
      x.push_back(t);
    }
    int sum=accumulate(x.begin(), x.end(), 0);
    int tmp;
    if(x[m]==0) tmp=0;
    else 
    {
      double t=1.0*sum/x[m];
      tmp=t*(100-p);
    }
    ans.push_back(tmp);
  }
  for(auto e: ans) cout<<e<<"\n";

  return 0;
}

