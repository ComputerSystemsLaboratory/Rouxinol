#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,m; cin>>n>>m;
  vector<int> c(n);
  vector<vector<int>> a(n,vector<int>(0));
  for(int i=0; i<m; ++i){int p,q; cin>>p>>q; a[p-1].push_back(q-1); a[q-1].push_back(p-1);}
  vector<bool> d(n,false);
  queue<int> que; que.push(0);
  while(true){
    int p=que.front(),q=a[p].size();
    while(q--) if(d[a[p][q]]==false){ que.push(a[p][q]); c[a[p][q]]=p; d[a[p][q]]=true;}
    que.pop();
    if(que.empty()) break;
  }
  bool solve=true;
  for(int i=0; i<n; ++i) solve&=d[i];
  if(solve==false){ cout<<"No"<<endl; return 0;}
  cout<<"Yes"<<endl;
  for(int i=1; i<n; ++i) cout<<c[i]+1<<endl;
  return 0;
}
